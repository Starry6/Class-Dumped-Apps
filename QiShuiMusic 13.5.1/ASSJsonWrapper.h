@interface ASSJsonWrapper : NSObject
+ (id)convertoDictionaryWithJsonData:;
+ (id)convertToJsonDataWithDictionary:;
+ (id)convertToJsonStringWithDictionary:;
+ (id)convertoDictionaryWithJsonString:;
@end
