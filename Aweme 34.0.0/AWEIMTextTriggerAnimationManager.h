@interface AWEIMTextTriggerAnimationManager : NSObject
+ (void)updateTextTriggerAnimationReource:;
+ (void)batchDownloadTextTriggerResourcesIfNeededWithTriggerType:;
+ (BOOL)shouldDownloadResource:;
+ (void)p_traceDownloadResult:error:tracker:;
+ (void)checkAccessExpireFile:;
+ (id)textTriggerRootPath:;
+ (void)updateTextTriggerReource:complete:;
+ (void)p_updateTextTriggerAnimationReource:;
+ (void)p_deleteTextTriggerAnimationReourceOptimizeIfNeed:complete:;
+ (id)textTriggerTempPath;
+ (id)textTriggerTempPath:;
+ (id)textTriggerPath:version:;
+ (id)textTriggerSubPath:;
@end
