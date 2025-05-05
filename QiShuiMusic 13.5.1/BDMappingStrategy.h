@interface BDMappingStrategy : NSObject
+ (id)mapCamelToSnakeCase:;
+ (id)mapJSONKeyWithArray:options:;
+ (id)mapJSONKeyWithDictionary:options:;
+ (id)mapSnakeCaseToCamel:;
@end
