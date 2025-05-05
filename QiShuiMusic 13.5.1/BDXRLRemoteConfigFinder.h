@interface BDXRLRemoteConfigFinder : NSObject
+ (id)findConfigBy:channel:resourceMeta:;
+ (id)findRemoteConfigBy:defaultPrefixToAk:taskConfig:;
@end
