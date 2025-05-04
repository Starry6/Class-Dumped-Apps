@interface AWENearbyInnerPushTracker : NSObject
+ (void)trackNoActionInnerPushMonitorWithAction:pageType:extraParams:;
+ (void)trackNoActionInnerPushFailedMonitorWithAction:pageType:failedReason:extraParams:;
@end
