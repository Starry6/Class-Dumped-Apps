@interface HMDSimpleBackgroundTask : NSObject
- (void)completeBackgroundTask;
- (void)completeBackgroundTaskFromTimer:;
- (id)initWithName:;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:;
+ (id)currentBackgroundTask;
+ (void)detachBackgroundTaskWithName:expireTime:task:;
+ (void)detachBackgroundTaskWithName:task:;
+ (void)endBackgroundTaskWithName:;
@end
