@interface AWETimingCloseAlertManager : NSObject
@property (nonatomic) BOOL didAppear;
@property (nonatomic) NSString topViewControllerBeforeAlert;
@property (nonatomic) @? onClose;
@property (nonatomic) AWETimingCloseAlertViewController alertVC;
@property (nonatomic) UIViewController bgDummyVC;
@property (nonatomic) AWETimingCloseAction timingCloseAction;
@property (nonatomic) BOOL dismissing;
@property (nonatomic) AWEForceAlertCallbackWrapper callbackWrapper;
@property (nonatomic) AWEForceAlertContext alertContext;
@property (nonatomic) BOOL needRemoveAlertWhenBackToForeground;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)showWithCloseCallback:;
- (void)onAppWillResignActive;
- (void)onAppDidEnterBackground;
- (void)setAlertVC:;
- (id)alertVC;
- (id)alertContext;
- (void)setAlertContext:;
- (void)cancelButtonDidClick;
- (void)registerTimingCloseAction:;
- (void)setTimingCloseAction:;
- (id)timingCloseAction;
- (BOOL)timeCloseForceAlertEnable;
- (void)setDidAppear:;
- (void)presentOnLivePlaying;
- (void)presentOnNormalScene;
- (void)p_presentOverFullScreenViewController;
- (void)dismissCurrentSheetIfNeedWithTopViewController:completion:;
- (void)setTopViewControllerBeforeAlert:;
- (id)calculateEnterFrom;
- (id)bgDummyVC;
- (void)setBgDummyVC:;
- (void)p_onCloseWithCloseType:completion:;
- (void)trackClickEventWithClickType:;
- (void)p_onCloseWithCompletion:;
- (void)resetStatusAfterAlertDismiss;
- (void)closeWithCloseType:;
- (void)trackCloseEventWithCloseType:;
- (void)callbackAfterAlertClose;
- (void)closeWithShowed:;
- (id)topViewControllerBeforeAlert;
- (void)onAppDidBecomeActiveFromResign;
- (BOOL)isPresentedOnListenFeed;
- (BOOL)needRemoveAlertWhenBackToForeground;
- (void)p_removeBgDummyViewController;
- (void)setNeedRemoveAlertWhenBackToForeground:;
- (id)callbackWrapper;
- (void)setCallbackWrapper:;
- (void)repeatButtonDidClick;
- (void)dismissViewDidClick;
- (void)timingCloseAlertBeDismissed;
- (id)forceAlertIDForEvent:;
- (unsigned long long)forceAlertViewStyleForEvent:;
- (void)forceShowWithContext:callbackWrapper:;
- (void)forceDismissWithCallTrace:;
- (void)dropPendingAlertIfNeeded;
- (BOOL)showAlertIfNeeded;
- (void)presentBgDummyViewController;
- (void)onAppDidBecomeActiveFromBackground;
- (void)setDismissing:;
- (BOOL)didAppear;
- (void).cxx_destruct;
- (void)viewDidAppear;
- (BOOL)dismissing;
- (BOOL)isShowingAlert;
- (id)onClose;
- (void)setOnClose:;
+ (id)moduleName;
+ (id)sharedInstance;
@end
