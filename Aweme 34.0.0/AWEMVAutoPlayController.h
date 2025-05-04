@interface AWEMVAutoPlayController : AWEDCFeedBaseController
- (void)listDidReloadData;
- (BOOL)isSplashShowing;
- (void)windowDidResignKeyNotification:;
- (void)windowDidBecomeKeyNotification:;
- (id)aAWEFeedModuleServiceDOUYINJXAdapter;
- (id)mvPageContext;
- (void)handleSplashDisappear:;
- (void)prerenderPlayerIfSplashShowing;
- (void)triggerStartAutoPlay;
- (void)triggerStopAutoPlay;
- (BOOL)shouldAutoPlay;
- (void)containerViewDidLoad;
+ (Class)aAWEFeedModuleServiceDOUYINJXAdapterClass;
@end
