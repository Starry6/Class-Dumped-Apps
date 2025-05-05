@interface JsonHelper : NSObject
+ (id)convertToJsonData::;
+ (id)dictionaryWithJsonString:;
+ (id)mergeJson::;
+ (void)mergeJson:withSrc:;
@end
