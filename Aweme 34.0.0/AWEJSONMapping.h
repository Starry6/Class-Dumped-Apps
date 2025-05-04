@interface AWEJSONMapping : NSObject
+ (void)trackParseTime:forModel:;
+ (void)trackUrl:json:error:;
+ (id)modelOfClass:fromJSONDictionary:error:;
@end
