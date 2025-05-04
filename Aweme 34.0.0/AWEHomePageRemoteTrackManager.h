@interface AWEHomePageRemoteTrackManager : NSObject
+ (void)trackModeClickWithContext:modeName:;
+ (void)willShowWithContext:;
+ (void)didShowWithContext:;
+ (void)willDismissWithContext:withReason:;
+ (void)didDismissWithContext:withReason:;
+ (void)didClickItemWithContext:withModuleType:withBusinessType:;
+ (id)p_exitMethodFromReason:;
+ (id)p_methodNameFromBusinessType:;
+ (void)didClickMaskWithContext:;
+ (void)didClickCloseButtonWithContext:;
@end
