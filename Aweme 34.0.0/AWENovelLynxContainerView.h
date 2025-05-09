@interface AWENovelLynxContainerView : UIView
@property (nonatomic) NSString lynxSourceUrlString;
@property (nonatomic) UITextField shieldTextField;
@property (nonatomic) UIView shieldView;
@property (nonatomic) UIView<BDXViewContainerProtocol> containerLynxView;
@property (nonatomic) BOOL isVisible;
@property (nonatomic) UIView loadingView;
@property (nonatomic) NSDictionary allParams;
@property (nonatomic) AWENovelChannelReport report;
@property (nonatomic) BOOL lastDarkMode;
@property (nonatomic) NSString pageUrl;
@property (nonatomic) NSDictionary nativeDelayData;
@property (nonatomic) BOOL hadCheckBlank;
@property (nonatomic) BOOL hadCheckMonitorSDKBlank;
@property (nonatomic) NSSet blankCheckSet;
@property (nonatomic) q loadingStamp;
@property (nonatomic) BOOL useNativeRender;
@property (nonatomic) BOOL isDidDisAppear;
@property (nonatomic) UILabel debugLabel;
@property (nonatomic) BDNovelPreload preload;
@property (nonatomic) <AWENovelLynxContainerViewDelegate> delegate;
@property (nonatomic) NSDictionary wapStayPageArg;
@property (nonatomic) double beginTime;
@property (nonatomic) BOOL isFinishLoad;
@property (nonatomic) BOOL isEnableManualAppear;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)container:didFinishLoadWithURL:;
- (void)container:didLoadFailedWithUrl:error:;
- (void)container:didChangeIntrinsicContentSize:;
- (void)containerDidStartLoading:;
- (void)container:didStartFetchResourceWithURL:;
- (void)container:didFetchedResource:error:;
- (void)containerDidFirstScreen:;
- (void)containerDidUpdate:;
- (void)container:didRecieveError:;
- (void)fireEvent:params:;
- (void)updateAppThemeWithKey:value:;
- (id)viewWithName:;
- (void)setLynxSourceUrlString:;
- (void)updateDebugInfo:;
- (void)setUseNativeRender:;
- (BOOL)isFinishLoad;
- (void)setNativeDelayData:;
- (void)nativeLoadData:completionHandler:;
- (void)didDisAppear:;
- (void)didAppear:;
- (BOOL)isEnableManualAppear;
- (BOOL)isDidDisAppear;
- (id)containerLynxView;
- (void)setIsDidDisAppear:;
- (id)shieldTextField;
- (id)shieldView;
- (void)setContainerLynxView:;
- (void)addLynxViewToParent:;
- (void)setShieldView:;
- (void)setShieldTextField:;
- (id)lynxSourceUrlString;
- (id)getProps;
- (id)getInitLynxData;
- (BOOL)useNativeRender;
- (void)setLastDarkMode:;
- (void)setHadCheckMonitorSDKBlank:;
- (void)setHadCheckBlank:;
- (void)setIsFinishLoad:;
- (void)setBlankCheckSet:;
- (void)handlerPreload:;
- (void)handlerNativePreload:;
- (void)createBdxView;
- (void)setLoadingStamp:;
- (long long)loadingStamp;
- (void)showLoading:;
- (id)nativePreloadSetting;
- (void)nativeFetchWithParams:completion:;
- (id)nativeCustomParams:url:;
- (void)setWapStayPageArg:;
- (void)updateProps;
- (void)setupBridge;
- (void)hanlderTimeoutLoading;
- (id)nativeDelayData;
- (BOOL)lastDarkMode;
- (void)innerSetDarkMode:;
- (BOOL)shouldShowDebug;
- (void)didManualAppear;
- (void)didManualDisAppear;
- (void)addBridgeWithName:handler:;
- (id)wapStayPageArg;
- (void)setIsEnableManualAppear:;
- (BOOL)hadCheckBlank;
- (BOOL)hadCheckMonitorSDKBlank;
- (id)blankCheckSet;
- (id)initWithFrame:routeParams:sourceURlString:delegate:;
- (void)didDisAppear;
- (void)addBridgeWithName:isNovel:handler:;
- (id)report;
- (void)dealloc;
- (id)delegate;
- (id)pageUrl;
- (void)updateWithDictionary:;
- (void)setLoadingView:;
- (id)debugLabel;
- (void)applicationDidEnterBackground;
- (void)setDebugLabel:;
- (void)load;
- (id)initWithFrame:;
- (void)setIsVisible:;
- (void)stopLoading;
- (void)reload;
- (id)loadingView;
- (double)beginTime;
- (id)preload;
- (void)setBeginTime:;
- (BOOL)isVisible;
- (void)didAppear;
- (void).cxx_destruct;
- (void)setReport:;
- (void)traitCollectionDidChange:;
- (void)applicationWillEnterForeground;
- (void)setDelegate:;
- (void)layoutSubviews;
- (void)setPreload:;
- (id)allParams;
- (void)setAllParams:;
@end
