class Foo {
  Foo* member;
};
/*
OUTPUT:
{
  "types": [{
      "id": 0,
      "usr": "c:@S@Foo",
      "short_name": "Foo",
      "qualified_name": "Foo",
      "definition": "1:1:7",
      "vars": [0],
      "uses": ["*1:1:7", "*1:2:3"]
    }],
  "vars": [{
      "id": 0,
      "usr": "c:@S@Foo@FI@member",
      "short_name": "member",
      "qualified_name": "Foo::member",
      "definition": "1:2:8",
      "variable_type": 0,
      "declaring_type": 0,
      "uses": ["1:2:8"]
    }]
}
*/
