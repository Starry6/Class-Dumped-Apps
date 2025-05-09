@interface AWERVLandScapeController : AWERVBaseController
@property (nonatomic) BOOL isMonitoring;
@property (nonatomic) BOOL isShowingKeyBoard;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)awe_shouldAutorotate;
- (unsigned long long)awe_supportedInterfaceOrientations;
- (id)aAWEPadModuleAdapter;
- (void)beginMonitor;
- (void)endMonitor;
- (id)screenCastControlView;
- (void)addNotifications;
- (void)handleKeyboardDidHideNotification:;
- (void)handleKeyboardWillShowNotification:;
- (void)updateScreenCastViewLayout:;
- (id)landscapeTransitionContext;
- (void)willExitLandscapeWithModel:modelList:;
- (void)didExitLandscapeWithFromContext:;
- (id)videoPlayerContainerView;
- (long long)preferVideoScaleMode;
- (BOOL)needScreenCastViewFillClipContainer;
- (BOOL)isLandscapeVideo;
- (unsigned long long)canAutoRotate;
- (void)autoEnterLandscapeFeedIfNeeded;
- (BOOL)isShowingKeyBoard;
- (void)setIsShowingKeyBoard:;
- (void)willEnterFullScreenWithEnterMethod:;
- (id)aAWEPadLongVideoPlayerAdapter;
- (void)viewDidAppearAfter;
- (void)didRefreshWithAwemeModel:;
- (BOOL)canMonitorOrientation;
- (void)trackRotateLandscapeScreen:;
- (id)preViewController;
- (void)dealloc;
- (void)viewDidLoad;
- (void)orientationChanged:;
- (BOOL)isMonitoring;
- (void)viewWillDisappear;
- (void)setIsMonitoring:;
+ (Class)aAWEPadModuleAdapterClass;
+ (Class)aAWEPadLongVideoPlayerAdapterClass;
@end
