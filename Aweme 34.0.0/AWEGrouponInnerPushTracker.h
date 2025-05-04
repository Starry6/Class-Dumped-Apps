@interface AWEGrouponInnerPushTracker : NSObject
+ (void)trackNoActionInnerPushMonitorWithAction:pageType:extraParams:;
+ (void)trackNoActionInnerPushFailedMonitorWithAction:pageType:failedReason:extraParams:;
@end
