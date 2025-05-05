@interface BDUGPushEventManager : NSObject
+ (id)_getEventParamsWithUserInfo:;
+ (id)_getPushClearType:;
+ (void)trackEvent:userInfo:;
+ (void)trackPushClearEventWithClearType:notification:;
+ (void)trackPushClearEventWithClearType:params:;
+ (void)trackPushClickEventWithResponse:;
@end
