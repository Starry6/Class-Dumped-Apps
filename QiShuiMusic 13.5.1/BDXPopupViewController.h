@interface BDXPopupViewController : UIViewController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) double alpha;
@property (nonatomic) BOOL destroyed;
@property (nonatomic) BOOL isContainerReady;
@property (nonatomic) BOOL isPageReady;
@property (nonatomic) BOOL hasExecuteOnShow;
@property (nonatomic) BOOL isContainerLoadFailed;
@property (nonatomic) q statusBarStyle;
@property (nonatomic) q originStatusBarStyle;
@property (nonatomic) q lastTopVCStatusBarStyle;
@property (nonatomic) UIColor originStatusBarBackgroundColor;
@property (nonatomic) UIView statusBarBackgroundView;
@property (nonatomic) UIView clickCloseView;
@property (nonatomic) UIView halfScreenContainerView;
@property (nonatomic) NSMutableArray pageReadyBlockList;
@property (nonatomic) NSMutableArray containerReadyBlockList;
@property (nonatomic) NSMutableArray containerLoadFailedBlockList;
@property (nonatomic) BOOL preControllerPopGestureRecongnizerEnabled;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} frameBeforeAdjustKeyboard;
@property (nonatomic) BOOL frameForKeyboardRecorded;
@property (nonatomic) NSDictionary closeParams;
@property (nonatomic) NSString closePopContainerId;
@property (nonatomic) NSTimer timer;
@property (nonatomic) BOOL pauseGestureSizeEvent;
@property (nonatomic) BDXSchemaParam<BDXPopupSchemaParamProtocol> config;
@property (nonatomic) BDXPopupViewContainer viewContainer;
@property (nonatomic) BOOL userInteractionEnabled;
@property (nonatomic) BOOL animationCompleted;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} frame;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} initialFrame;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} finalFrame;
@property (nonatomic) q currentStatus;
@property (nonatomic) UIView maskView;
@property (nonatomic) {CGPoint=dd} panStartLocation;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} panStartFrame;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} dragHeightFrame;
@property (nonatomic) double halfToFullScreenOriginalY;
@property (nonatomic) BOOL dragUppingIsValid;
@property (nonatomic) double finalDragUppingSpace;
@property (nonatomic) double dragUppingYThreshold;
@property (nonatomic) double overDraggedY;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) BOOL dragInMaxHeight;
@property (nonatomic) BOOL handleTouchFinish;
@property (nonatomic) @? completion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <BDXPopupEventProtocol> popupEventDelegate;
@property (nonatomic) q viewType;
@property (nonatomic) BDXContext context;
@property (nonatomic) BOOL hybridInBackground;
@property (nonatomic) BOOL hybridAppeared;
@property (nonatomic) <BDXContainerLifecycleProtocol> containerLifecycleDelegate;
@property (nonatomic) BOOL didMount;
@property (nonatomic) NSString sessionID;
@property (nonatomic) NSURL originURL;
@property (nonatomic) {CGSize=dd} preferredLayoutSize;
@property (nonatomic) NSString containerID;
@property (nonatomic) UIView<BDXKitViewProtocol> kitView;
@property (nonatomic) NSString engineType;
@property (nonatomic) <BDXPoolContainerDelegate> poolContainerDelegate;
- (void)__setupUIConfig;
- (void)container:didFinishLoadWithURL:;
- (BOOL)dragInMaxHeight;
- (void)setIsPageReady:;
- (void)setupIpadConfig;
- (id)adjustedFrameWithKeyboardFrame:;
- (BOOL)close:animated:;
- (id)dragHeightFrame;
- (void)handleTapOnMask;
- (id)kitView;
- (void)panOnContainer:;
- (void)resizeWithAnimation:completion:;
- (void)setCloseParams:;
- (void)showContainerVc;
- (void)__addLoadFailedView:;
- (void)__addLoadingViewIfNeeded;
- (id)__buildLoadErrorView;
- (id)__buildLoadingView;
- (void)__createContentViewIfNeeded;
- (BOOL)__isCachedViewAlreadLoad;
- (id)__makeSetContainerMethod;
- (void)__resetStatusBarStyle;
- (void)__setPopUpRadius;
- (void)__setupNotification;
- (void)__updateStatusBarStatusWithConfig:;
- (void)addStatusBarContainerView;
- (void)adjustHeightWithHeightPercent:animated:draggable:completion:;
- (void)allowCloseByGesture:;
- (void)bdx_closeWithAnimated:completion:;
- (void)bdx_jsbReloadView;
- (BOOL)bdx_shouldUseCustomClose;
- (void)changeScreenViewsAlpha:ignoreHalfCloseBtn:;
- (BOOL)checkCloseLimit:offsetX:offsetY:;
- (id)clickCloseView;
- (BOOL)close:animated:completion:;
- (BOOL)close:completion:;
- (id)closeParams;
- (id)closePopContainerId;
- (void)closeWithParams:animated:completion:;
- (void)container:didChangeIntrinsicContentSize:;
- (void)container:didLoadFailedWithUrl:error:;
- (void)container:onKeyBoardChange:eventType:;
- (void)containerDidPageReady:sourceParam:;
- (id)containerLifecycleDelegate;
- (id)containerLoadFailedBlockList;
- (id)containerReadyBlockList;
- (void)didHalfToFullScreenGesture:;
- (BOOL)didMount;
- (BOOL)dragUppingIsValid;
- (double)dragUppingYThreshold;
- (BOOL)enableDragUpping;
- (BOOL)enbleIpadAdapter;
- (double)finalDragUppingSpace;
- (id)frameBeforeAdjustKeyboard;
- (BOOL)frameForKeyboardRecorded;
- (id)getViewContainer;
- (id)halfScreenContainerView;
- (double)halfToFullScreenOriginalY;
- (void)handleBecomeActive;
- (void)handleCloseEvent:;
- (void)handleDragBack;
- (void)handleDragChanged:;
- (void)handleDragEnd:offsetY:;
- (void)handleDragEvent:;
- (void)handleKeyboardWillHideNotification:;
- (void)handleKeyboardWillShowOrChangeFrameNotification:;
- (void)handleResignActive;
- (void)handleTapOnSelf:;
- (BOOL)handleTouchFinish;
- (void)handleViewDidAppear;
- (void)handleWhenClosing;
- (void)handleXBridgeHideLoadingMethod;
- (BOOL)hasExecuteOnShow;
- (BOOL)hasRightOrBottomMargin;
- (BOOL)hasSafeArea;
- (id)hmdPageExtension;
- (double)homeIndicatorHeight;
- (BOOL)hybridAppeared;
- (BOOL)hybridInBackground;
- (id)iPadRatio;
- (id)initWithConfig:context:lastTopVCStatusBarStyle:;
- (id)ipadConfig;
- (id)ipadContainerSize;
- (BOOL)isContainerLoadFailed;
- (BOOL)isContainerReady;
- (BOOL)isFullScreenHeight:;
- (BOOL)isHalfScreenHeight:;
- (BOOL)isIpadPortraitMode;
- (BOOL)isPageReady;
- (BOOL)isWebcastBussiness;
- (long long)lastTopVCStatusBarStyle;
- (void)layoutIpadIfNeeded;
- (id)lifeCycleTracker;
- (void)loadWithURL:context:;
- (void)noticeAnimateFrameChange:;
- (void)notifyChangeToPopupStatu:;
- (void)notifyWillLeaveStatue:;
- (id)originStatusBarBackgroundColor;
- (long long)originStatusBarStyle;
- (double)overDraggedY;
- (id)pageReadyBlockList;
- (id)panStartFrame;
- (id)panStartLocation;
- (BOOL)pauseGestureSizeEvent;
- (id)poolContainerDelegate;
- (id)popupEventDelegate;
- (void)popupShow;
- (void)popupShowAnimationFinished;
- (BOOL)preControllerPopGestureRecongnizerEnabled;
- (id)preferredLayoutSize;
- (void)registerXBridgeMethod:;
- (void)removeKitView;
- (void)removeSelf:completion:;
- (void)resetKitView;
- (void)resize:fromGesture:;
- (void)resizeWithAnimation:frame:completion:;
- (id)screenBoundsSize;
- (void)sendPopupCloseEvent:params:;
- (void)sendSizeChangeEvent:fromGesture:;
- (void)setAnimationCompleted:;
- (void)setClickCloseView:;
- (void)setClosePopContainerId:;
- (void)setContainerLifecycleDelegate:;
- (void)setContainerLoadFailedBlockList:;
- (void)setContainerReadyBlockList:;
- (void)setDidMount:;
- (void)setDragHeightFrame:;
- (void)setDragInMaxHeight:;
- (void)setDragUppingIsValid:;
- (void)setDragUppingYThreshold:;
- (void)setFinalDragUppingSpace:;
- (void)setFrameBeforeAdjustKeyboard:;
- (void)setFrameForKeyboardRecorded:;
- (void)setHalfScreenContainerView:;
- (void)setHalfToFullScreenOriginalY:;
- (void)setHandleTouchFinish:;
- (void)setHasExecuteOnShow:;
- (void)setHybridAppeared:;
- (void)setHybridInBackground:;
- (void)setIsContainerLoadFailed:;
- (void)setIsContainerReady:;
- (void)setLastTopVCStatusBarStyle:;
- (void)setOriginStatusBarBackgroundColor:;
- (void)setOriginStatusBarStyle:;
- (void)setOverDraggedY:;
- (void)setPageReadyBlockList:;
- (void)setPanStartFrame:;
- (void)setPanStartLocation:;
- (void)setPauseGestureSizeEvent:;
- (void)setPoolContainerDelegate:;
- (void)setPopupEventDelegate:;
- (void)setPreControllerPopGestureRecongnizerEnabled:;
- (void)setStatusBarBackgroundColor:;
- (void)setTopLevelEnable:;
- (BOOL)shouldIgnoreHalfCloseBtnAlpha;
- (id)topLevelEnable;
- (double)upStatusBarHeight;
- (void)updateBackButtonAlpha;
- (void)updateHalfScreenButtonsTopOffset;
- (void)updateMetrixScreenSize;
- (void)updateWebcastLayout;
- (double)viewContainerBottomOffset;
- (double)viewContainerRightOffset;
- (id)viewControllerOfContainer;
- (id)completion;
- (void)reload;
- (BOOL)shouldAutorotate;
- (void)updateLayout;
- (id)sessionID;
- (void)setCompletion:;
- (void)load;
- (long long)preferredStatusBarStyle;
- (long long)viewType;
- (void)attachToView:;
- (BOOL)isiPad;
- (void)dealloc;
- (long long)statusBarStyle;
- (id)containerID;
- (BOOL)isAnimating;
- (id)maskView;
- (id)context;
- (void)setFrame:;
- (void)hide;
- (BOOL)gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:;
- (void)setConfig:;
- (BOOL)isLandscape;
- (void)setAlpha:;
- (long long)currentStatus;
- (void)viewDidDisappear:;
- (void)show;
- (id)frame;
- (void)setTimer:;
- (BOOL)conformsToProtocol:;
- (void)setUserInteractionEnabled:;
- (BOOL)close:;
- (void)setStatusBarBackgroundView:;
- (double)alpha;
- (id)statusBarBackgroundView;
- (void)viewWillDisappear:;
- (void)destroy;
- (id)engineType;
- (double)topMargin;
- (void).cxx_destruct;
- (BOOL)userInteractionEnabled;
- (id)timer;
- (void)viewDidAppear:;
- (void)viewWillAppear:;
- (BOOL)gestureRecognizerShouldBegin:;
- (id)config;
- (void)setStatusBarStyle:;
- (unsigned long long)supportedInterfaceOrientations;
- (void)setContext:;
- (BOOL)destroyed;
- (void)setMaskView:;
- (void)setIsAnimating:;
- (void)viewDidLayoutSubviews;
- (void)setCurrentStatus:;
- (void)viewDidLoad;
- (BOOL)animationCompleted;
- (id)initialFrame;
- (void)setInitialFrame:;
- (id)originURL;
- (id)finalFrame;
- (void)setFinalFrame:;
- (id)viewContainer;
- (void)setViewContainer:;
- (void)reloadWithContext:;
- (void)handleViewDidDisappear;
- (void)setDestroyed:;
- (void)initGesture;
+ (id)createWithConfiguration:context:url:completion:;
+ (id)findTopVc:;
+ (BOOL)isHitRouterDowngrade:;
+ (id)mainAppWindow;
+ (id)openWithConfiguration:context:completion:;
+ (void)showContainerWithContext:config:vc:completion:;
@end
