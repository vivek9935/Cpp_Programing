const xhr = new XMLHttpRequest();
xhr.open('GET', 'https://example.com/data.json');
xhr.responseType = 'json';
xhr.onload = function() {
  console.log(xhr.response);
};
xhr.onerror = function() {
  console.error('Error occurred');
};
xhr.send();
