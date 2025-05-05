@interface CNMECARDParser : NSObject
+ (id)parseString:resultFactory:error:;
+ (void)enumerateTagsInString:usingBlock:;
@end
