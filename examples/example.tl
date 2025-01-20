---types---
true#37a9f1ba = True;
error#c4b9f9bb code:int text:string = Error;
example.long long = example.Long;

user {fields_mask:#}
    id:int
    name:string
  = User fields_mask;

point {fields_mask:#}
    x:int
    y:int
    z:fields_mask.0?int
  = Point fields_mask;

exmaple.getUserResult {fields_mask:#} {user_fields_mask:#} {point_fields_mask:#}
    a:example.Int
    b:Int
    c:int
    u:(example.user user_fields_mask)
    x:%(example.User user_fields_mask)
    p:fields_mask.1?(example.Point point_fields_mask)
  = example.GetUserResult fields_mask user_fields_mask point_fields_mask;

getPointResult {fields_mask:#} {user_fields_mask:#} {point_fields_mask:#}
    p:%(Point fields_mask)
    t:%True
  = GetPointResult fields_mask point_fields_mask;

---functions---
@read getUser#baadf00d
    result_point_z:point_fields_mask.0?true
    fields_mask:#
    user_fields_mask:int
    result_point:TestType
    point_fields_mask:fields_mask.2?#
    result_user_height:user_fields_mask.0?true
  = GetUserResult fields_mask user_fields_mask point_fields_mask;
