@interface CBAnalyticsScheduler : NSObject
- (id)init;
- (void)dealloc;
- (long long)registerHandler:;
- (void)run;
- (void)removeHandler:;
+ (id)sharedInstance;
@end
