@interface AWESearchAIGCResultRouter : NSObject
+ (BOOL)isSameQueryRepeatEntryWithResultRouterParams:;
+ (id)debug_diffParams;
+ (void)invokeAIGCPanelContainer:aigcVC:;
+ (void)checkNavigationControllerContainVC:navgationVC:;
+ (void)configTransitionType:;
+ (BOOL)isHasLocalHistoryStorageWithResultRouterParams:;
+ (Class)routerForResultViewControllerClass;
+ (BOOL)enableChangeRouterMethod;
+ (BOOL)fixSearchAIGCResultVCDelayDeallocEnabled;
+ (void)customTransition:previousParams:;
+ (BOOL)keepAliveEnabled;
@end
