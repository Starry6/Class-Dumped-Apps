@interface AWETrackerAspectRegister : NSObject
+ (id)applyAspectsForEvent:context:;
+ (void)collectAllAspectsFromCollector;
+ (void)strategyWhenApplyTimeoutForEvent:withTimeout:;
@end
