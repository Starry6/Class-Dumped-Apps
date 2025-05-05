@interface HybridResourceUtil : NSObject
+ (id)extractURLDetail:accessKey:context:falconPrefixList:;
+ (id)extractURLDetail:taskConfig:falconPrefixList:;
+ (id)extractURLDetail:withPrefixList:;
+ (id)findPrefixInParams:sourceURL:;
+ (Class)getForestRLClass;
+ (id)getForestRLInstance;
+ (id)resolvedUrl:;
@end
