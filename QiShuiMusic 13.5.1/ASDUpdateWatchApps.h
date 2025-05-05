@interface ASDUpdateWatchApps : NSObject
+ (BOOL)shouldPromptBeforeUpdating;
+ (void)shouldPromptBeforeUpdatingWithResultHandler:;
+ (BOOL)updateBundleIDs:userInitiated:error:;
+ (void)updateBundleIDs:userInitiated:withResultHandler:;
@end
