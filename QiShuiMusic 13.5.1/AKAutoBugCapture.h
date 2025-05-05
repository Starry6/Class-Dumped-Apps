@interface AKAutoBugCapture : NSObject
+ (void)triggerAutoBugCaptureWithSubType:andBundleID:userInfo:;
+ (BOOL)shouldCapturePromptBugForContext:;
+ (id)userInfoFromContext:;
+ (id)userInfoFromAccount:;
@end
