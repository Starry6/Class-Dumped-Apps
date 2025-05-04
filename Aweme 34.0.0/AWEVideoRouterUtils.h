@interface AWEVideoRouterUtils : NSObject
+ (BOOL)canStartVideoFlow;
+ (BOOL)recorderIsInWindowHierarchy;
+ (BOOL)isInRecordTask;
+ (BOOL)isInsideRecorder;
+ (void)showPublishingToast:;
+ (void)showFobidReenterRecorderToast;
+ (BOOL)currentIsInspirationPathWithViewController:;
+ (void)setRecordPreparationTrigger:;
+ (id)latestRecordPreparationTrigger;
+ (BOOL)isInCreativeWorkflow;
+ (void)setupEffectGeneralParamsFetchingBlock;
+ (void)setEffectShaderCachePath;
+ (void)clearEffectShaderCacheIfNeed;
+ (BOOL)hasACCViewControllerInViewStack;
+ (void)showDraftForbidEnterRecorderToast;
+ (id)itemCacheDirectory;
+ (BOOL)hasACCViewControllerInViewStackOf:;
+ (BOOL)isInBlackListWithVC:;
@end
