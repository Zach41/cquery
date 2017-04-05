class Parent {};
class Derived : public Parent {};

/*
OUTPUT:
{
  "types": [{
      "id": 0,
      "usr": "c:@S@Parent",
      "short_name": "Parent",
      "qualified_name": "Parent",
      "definition": "1:7",
      "derived": [1],
      "uses": ["*1:7", "*2:24"]
    }, {
      "id": 1,
      "usr": "c:@S@Derived",
      "short_name": "Derived",
      "qualified_name": "Derived",
      "definition": "2:7",
      "parents": [0],
      "uses": ["*2:7"]
    }]
}
*/
