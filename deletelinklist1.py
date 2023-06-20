class Node:
    def __init__(self, data):
        self.data = data
        self.prev = None
        self.next = None
        
    def __del__(self):
        val = self.data
        if self.next:
            del self.next
            self.next = None
        print("memory free from node with data", val)

def printList(head):
    temp = head
    while temp:
        print(temp.data, end=" ")
        temp = temp.next
    print()

def getLength(head):
    len = 0
    temp = head
    while temp:
        len += 1
        temp = temp.next
    return len

def insertNode(head, d):
    temp = Node(d)
    temp.next = head
    if head:
        head.prev = temp
    head = temp
    return head

def insertAtTail(tail, d):
    temp = Node(d)
    temp.prev = tail
    if tail:
        tail.next = temp
    tail = temp
    return tail

def insertToNode(head, tail, position, d):
    if position == 1:
        return insertNode(head, d)
    temp = head
    cnt = 1
    while cnt < position-1:
        temp = temp.next
        cnt += 1
    #inserting at last position
    if temp.next == None:
        return insertAtTail(tail, d)
    else:
        #creating a node 
        nodeToInsert = Node(d)
        #inserting the node at the position
        nodeToInsert.next = temp.next
        temp.next.prev = nodeToInsert
        temp.next = nodeToInsert
        nodeToInsert.prev = temp
    return head

def deleteNode(head, position):
    if position == 1:
        temp = head
        head = temp.next
        if head:
            head.prev = None
        temp.next = None
        del temp
    else:
        curr = head
        prev = None
        cnt = 1
        while cnt < position:
            prev = curr
            curr = curr.next
            cnt += 1
        curr.prev = None
        prev.next = curr.next
        if curr.next:
            curr.next.prev = prev
        curr.next = None
        del curr

#driver code
node1 = Node(10)
head = node1
tail = node1
head = insertNode(head, 20)
head = insertNode(head, 30)
tail = insertAtTail(tail, 40)
printList(head)
print(tail.data)
tail = insertAtTail(tail, 60)
printList(head)
print("the head is", head.data)
print("the tail is", tail.data)
head = insertToNode(head, tail, 5, 100)
printList(head)
deleteNode(head, 2)
printList(head)
d = getLength(head)
print(d)
