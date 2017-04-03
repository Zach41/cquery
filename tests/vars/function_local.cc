struct Foo;

void foo() {
  Foo* a;
}

/*
OUTPUT:
{
  "types": [{
      "id": 0,
      "usr": "c:@S@Foo",
      "instantiations": [0],
      "uses": ["1:1:8", "*1:4:3"]
    }],
  "funcs": [{
      "id": 0,
      "usr": "c:@F@foo#",
      "short_name": "foo",
      "qualified_name": "foo",
      "definition": "1:3:6",
      "uses": ["1:3:6"]
    }],
  "vars": [{
      "id": 0,
      "usr": "c:function_local.cc@31@F@foo#@a",
      "short_name": "a",
      "qualified_name": "a",
      "definition": "1:4:8",
      "variable_type": 0,
      "uses": ["1:4:8"]
    }]
}
*/
