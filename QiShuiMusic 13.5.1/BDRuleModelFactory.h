@interface BDRuleModelFactory : NSObject
+ (id)parseJsonArray:;
+ (id)formatToJsonArray:;
+ (id)modelWithDictionary:key:;
+ (id)modelWithDictionary:key:strategy:source:;
@end
