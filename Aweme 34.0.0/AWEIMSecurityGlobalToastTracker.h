@interface AWEIMSecurityGlobalToastTracker : NSObject
+ (void)trackWithEventName:actionType:dialogModel:toastConfig:reportValue:linkType:;
+ (void)trackEventWithEventName:actionType:dialogModel:toastConfig:reportValue:;
+ (void)trackEventWithEventName:actionType:dialogModel:toastConfig:;
@end
