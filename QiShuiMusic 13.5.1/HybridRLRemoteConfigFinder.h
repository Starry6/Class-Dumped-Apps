@interface HybridRLRemoteConfigFinder : NSObject
+ (id)findConfigBy:channel:resourceMeta:;
+ (id)findRemoteConfigBy:withDefaultPrefixToAccessKey:;
@end
