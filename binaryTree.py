from collections import deque

class Node:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None

def buildTree():
    print("Enter the data for node:")
    data = int(input())
    if data == -1:
        return None
    root = Node(data)
    print("Enter data for inserting in left", data)
    root.left = buildTree()
    print("Enter data for inserting in right", data)
    root.right = buildTree()
    return root

def levelOrderTraversal(root):
    if not root:
        return
    queue = deque()
    queue.append(root)
    while queue:
        node = queue.popleft()
        print(node.data, end=" ")
        if node.left:
            queue.append(node.left)
        if node.right:
            queue.append(node.right)
        if not queue:
            print()

def buildFromLevelOrder():
    queue = deque()
    print("Enter the data for root:")
    data = int(input())
    if data == -1:
        return None
    root = Node(data)
    queue.append(root)
    while queue:
        temp = queue.popleft()
        print("Enter left node for", temp.data)
        leftData = int(input())
        if leftData != -1:
            temp.left = Node(leftData)
            queue.append(temp.left)
        print("Enter right node for", temp.data)
        rightData = int(input())
        if rightData != -1:
            temp.right = Node(rightData)
            queue.append(temp.right)
    return root

root = None
# Uncomment one of the following lines based on the desired tree construction method
# root = buildTree()
# root = buildFromLevelOrder()
levelOrderTraversal(root)
