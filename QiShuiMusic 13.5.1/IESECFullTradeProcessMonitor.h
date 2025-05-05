@interface IESECFullTradeProcessMonitor : NSObject
+ (BOOL)alogSwitch;
+ (id)alogTagWithPageName:;
+ (id)formatEventWithEventType:pageName:action:;
+ (void)hmdTrackEvent:metric:category:extra:;
+ (BOOL)isSamplingWithType:;
+ (void)monitorDurationWithPage:action:duration:category:extra:;
+ (void)monitorErrorWithPage:action:code:category:extra:;
+ (void)monitorRateEndWithPage:action:success:code:category:message:;
+ (void)monitorRateStartWithPage:action:category:;
+ (void)trackEvent:params:;
@end
