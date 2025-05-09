@interface IESECLynxCard : UIView
@property (nonatomic) HybridLynxView lynxView;
@property (nonatomic) IESECLynxCardModel model;
@property (nonatomic) BOOL jsRTReady;
@property (nonatomic) BOOL tmpLoadSuccess;
@property (nonatomic) NSMutableDictionary firstLoadEvents;
@property (nonatomic) BOOL lynxViewFromPreloader;
@property (nonatomic) <LynxImageFetcher> ecImageFetcher;
@property (nonatomic) IESECLynxCardTimingModel timingModel;
@property (nonatomic) <HybridResourceProtocol> templateResource;
@property (nonatomic) LynxExtraTiming lynxExtraTiming;
@property (nonatomic) UIView loadingView;
@property (nonatomic) q updateCount;
@property (nonatomic) BOOL pageAppeared;
@property (nonatomic) BOOL isUpdating;
@property (nonatomic) NSDictionary hybridMonitorContext;
@property (nonatomic) NSString hmBid;
@property (nonatomic) IESECLynxCardPerfMonitor perfMonitor;
@property (nonatomic) <IESECLynxCardDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)beginAutoPlayTimerWithDuration:;
- (void)onContextPropsExtraDataChanged:;
- (void)onThemeChanged:;
- (void)registerBridge:;
- (void)registerBridges;
- (void)setTimingModel:;
- (id)firstLoadEvents;
- (id)lynxExtraTiming;
- (BOOL)pageDidAppeared;
- (void)setPerfMonitor:;
- (void)_sendEvent:params:;
- (id)autoPlayTimer;
- (BOOL)canSendEventsToLynx;
- (void)dismissLoadingViewIfNeed:;
- (id)ecImageFetcher;
- (void)endAutoPlayTimer;
- (id)fakeEncodedMessage:;
- (id)findViewWithName:;
- (id)findViewsFromRootView:filter:;
- (id)hmBid;
- (id)hybridMonitorContext;
- (void)injectBstViewModel:;
- (void)injectPropsExtra:;
- (BOOL)isLynxViewFromPreloader;
- (BOOL)isPageChanged:sourceType:;
- (BOOL)jsRTReady;
- (void)layoutLynxVeiwIfNeed:;
- (id)lynxView;
- (void)lynxView:onSetup:;
- (void)lynxView:onUpdate:timing:;
- (BOOL)lynxViewFromPreloader;
- (BOOL)pageAppeared;
- (id)perfMonitor;
- (void)playCompleteBlockWithPlayNext:;
- (BOOL)playCompleteJSBRegisterd;
- (void)playWithAutoPlayDuration:completeBlock:;
- (void)registerXBridgeClasses:;
- (void)registerXBridgeInstances:;
- (void)resetLynxData:needMerge:;
- (void)resetLynxHeightMode:;
- (void)resetLynxWidthMode:;
- (void)sendEvent:params:;
- (void)sendPageVisibilityEvent:showOrHide:source:;
- (void)sendPageVisibleChangedForMutiThread;
- (void)setAutoPlayTimer:;
- (void)setEcImageFetcher:;
- (void)setFirstLoadEvents:;
- (void)setGreyStyleWithSaturation:;
- (void)setHmBid:;
- (void)setHybridMonitorContext:;
- (void)setJsRTReady:;
- (void)setLynxExtraTiming:;
- (void)setLynxView:;
- (void)setLynxViewFromPreloader:;
- (void)setPageAppeared:;
- (void)setPlayCompleteBlock:;
- (void)setPlayCompleteJSBRegisterd;
- (void)setTemplateResource:;
- (void)setTmpLoadSuccess:;
- (void)setupLynxView;
- (void)showLoadingViewIfNeed;
- (id)templateResource;
- (id)timingModel;
- (BOOL)tmpLoadSuccess;
- (id)triggerLayout;
- (id)uiWithIdSelector:;
- (id)uiWithName:;
- (void)updateGlobalProps:;
- (void)updateLynxViewport;
- (void)updateOrResetWithData:;
- (void)view:didChangeIntrinsicContentSize:;
- (void)view:didFetchedResource:error:;
- (void)view:didFinishLoadWithURL:;
- (void)view:didLoadFailedWithURL:error:;
- (void)view:didReceivePerformance:;
- (void)view:didRecieveError:;
- (void)view:didStartFetchResourceWithURL:;
- (void)viewDidAppear:sourceType:;
- (void)viewDidConstructJSRuntime:;
- (void)viewDidDisappear:sourceType:;
- (void)viewDidFirstScreen:;
- (void)viewDidPageUpdate:;
- (void)viewDidStartLoading:;
- (void)viewDidUpdate:;
- (void)viewWillStartLoading:;
- (BOOL)isUpdating;
- (id)model;
- (void)load;
- (void)dealloc;
- (void)setModel:;
- (void)layoutSubviews;
- (void)setDelegate:;
- (void)prepareForReuse;
- (id)hitTest:withEvent:;
- (id)initWithFrame:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setIsUpdating:;
- (void)pause;
- (long long)updateCount;
- (void)setUpdateCount:;
- (id)loadingView;
- (void)setLoadingView:;
- (void)updateWithModel:;
- (void)updateSize:;
@end
