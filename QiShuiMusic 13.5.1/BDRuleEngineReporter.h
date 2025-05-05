@interface BDRuleEngineReporter : NSObject
+ (void)log:tags:block:;
+ (void)delayLog:tags:block:;
+ (void)log:metric:category:extra:;
+ (void)log:tags:delay:block:;
+ (BOOL)shouldSampleWithTags:;
+ (id)tracker;
+ (id)monitor;
@end
