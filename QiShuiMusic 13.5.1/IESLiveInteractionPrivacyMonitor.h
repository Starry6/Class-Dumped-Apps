@interface IESLiveInteractionPrivacyMonitor : NSObject
+ (void)cancelMonitorTaskWithBiz:scene:;
+ (void)startMonitorTaskWithType:biz:scene:;
+ (void)startMonitorTaskWithType:biz:scene:delay:params:completionBlock:;
@end
