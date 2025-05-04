@interface AWECloudBackgroundTaskUtility : NSObject
- (void)completeBackgroundTask;
- (void)completeBackgroundTaskFromTimer:;
- (unsigned long long)hash;
- (id)initWithName:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
+ (void)detachBackgroundTaskWithName:expireTime:task:;
+ (id)currentBackgroundTask;
+ (void)detachBackgroundTaskWithName:task:;
+ (void)endBackgroundTaskWithName:;
@end
