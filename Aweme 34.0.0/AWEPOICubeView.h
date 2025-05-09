@interface AWEPOICubeView : UIView
@property (nonatomic) UIView<BDXLynxViewProtocol> lynxContainer;
@property (nonatomic) UIView<AnnieXContainerBaseProtocol> neoLynxContainer;
@property (nonatomic) <AnnieXCardModelProtocol> cardModel;
@property (nonatomic) NSNumber geckoID;
@property (nonatomic) BDXLynxKitParams kitParams;
@property (nonatomic) BDXContext context;
@property (nonatomic) <BDXMonitorProtocol> monitor;
@property (nonatomic) BOOL isLoading;
@property (nonatomic) BOOL isLoadFailed;
@property (nonatomic) BOOL isLoadSuccess;
@property (nonatomic) double initTimeStamp;
@property (nonatomic) NSMutableDictionary hasLoadedDict;
@property (nonatomic) AWEPOICubeNativeModuleContext nativeModuleContext;
@property (nonatomic) NSString loadStatus;
@property (nonatomic) q dataSize;
@property (nonatomic) AWEPOICubeMonitor cubeMonitor;
@property (nonatomic) NSString bid;
@property (nonatomic) BOOL didUpdateData;
@property (nonatomic) BOOL forceUpdateInThisSession;
@property (nonatomic) BOOL disableGecko;
@property (nonatomic) BOOL enableMemoryCache;
@property (nonatomic) AWEPOICubeModel waitCubeModel;
@property (nonatomic) NSDictionary waitExtraParams;
@property (nonatomic) BOOL enableUIOperationQueue;
@property (nonatomic) <AWEPOICubeViewDelegate> delegate;
@property (nonatomic) LynxView lynxView;
@property (nonatomic) NSString containerID;
@property (nonatomic) AWEPOICubeModel cubeModel;
@property (nonatomic) NSDictionary extraParams;
@property (nonatomic) NSString uniqueTag;
@property (nonatomic) BOOL isPreloadView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)container:didFinishLoadWithURL:;
- (void)container:didLoadFailedWithUrl:error:;
- (void)container:didChangeIntrinsicContentSize:;
- (void)containerWillStartLoading:;
- (void)containerDidStartLoading:;
- (void)container:didStartFetchResourceWithURL:;
- (void)container:didFetchedResource:error:;
- (void)containerDidFirstScreen:;
- (void)containerDidUpdate:;
- (void)container:didRecieveError:;
- (void)containerDidPageUpdate:;
- (void)container:onSetupLynxInfo:bulletInfo:;
- (void)container:onUpdateLynxInfo:bulletInfo:;
- (void)setExtraParams:;
- (id)extraParams;
- (void)viewDidUpdate:;
- (void)sendEvent:params:;
- (id)cardModel;
- (id)lynxView;
- (id)bid;
- (void)setBid:;
- (id)kitParams;
- (id)geckoID;
- (id)lynxContainer;
- (void)setEnableMemoryCache:;
- (BOOL)enableMemoryCache;
- (void)setCardModel:;
- (void)setInitTimeStamp:;
- (double)initTimeStamp;
- (Class)schemaClass;
- (void)provideDefaultCardDataWithCardModel:;
- (void)provideInstanceDataWitCardModel:schemaClass:;
- (void)view:didLoadFailedWithUrl:error:;
- (void)viewWillStartLoading:;
- (void)view:didChangeIntrinsicContentSize:;
- (void)viewDidStartLoading:;
- (void)view:didStartFetchResourceWithURL:;
- (void)view:didFetchedResource:error:;
- (void)viewDidFirstScreen:;
- (void)view:didFinishLoadWithURL:;
- (void)view:didRecieveError:;
- (void)viewDidPageUpdate:;
- (void)view:onSetUp:;
- (void)view:onUpdate:;
- (void)setDisableGecko:;
- (BOOL)disableGecko;
- (BOOL)enableUIOperationQueue;
- (void)setEnableUIOperationQueue:;
- (void)setIsLoadFailed:;
- (BOOL)isLoadFailed;
- (double)getDurationForStartTime:endTime:;
- (id)containerInitTimeStamp;
- (void)setLynxContainer:;
- (void)registerBridgeHandle:forMethod:;
- (id)lynxInitialData;
- (id)lynxGlobalProps;
- (void)setIsLoadSuccess:;
- (BOOL)isLoadSuccess;
- (void)lynxViewWillShow;
- (void)lynxViewWillHide;
- (id)uniqueTag;
- (void)setUniqueTag:;
- (void)setCubeModel:;
- (void)trackEvent:metric:category:;
- (id)cubeModel;
- (BOOL)isPredecodeWithCubeMonitor:;
- (BOOL)isCubeBaseOnAnniexCard;
- (id)neoLynxContainer;
- (void)triggerEventBus:withParams:;
- (id)initWithFrame:cubeModel:extraParams:delegate:;
- (id)initWithFrame:cubeModel:uniqueTag:extraParams:delegate:;
- (void)bindCubeModel:;
- (void)createCubeMonitor;
- (id)cubeMonitor;
- (id)ditoLogCommonParams;
- (void)setupCubeConfig;
- (void)setupBizBeforeCreateLynxView;
- (void)setupLynxView:;
- (void)trackTimeLine;
- (void)appendParametersToCubeModel:;
- (void)configMonitor;
- (void)_setupLynxViewWithUrl:;
- (id)cubeSettings;
- (void)setNeoLynxContainer:;
- (BOOL)isPreloadView;
- (id)fetchInitialData;
- (void)configWithLynxViewBuilder:;
- (id)generateParamWithContext:url:;
- (void)setKitParams:;
- (id)customElements;
- (id)nativeModuleClasses;
- (id)nativeModuleContext;
- (long long)threadStrategyFromTemplateUrl:;
- (BOOL)enableCubeParserUrlThreadStrategy;
- (long long)threadStrategyForBDX:;
- (BOOL)enableCustomLynxComponent;
- (id)defaultCubeUIElementsConfigs;
- (id)bizCustomUIElementsConfigs;
- (id)customLynxElementWithRegisterName:elementClass:;
- (BOOL)shouldUpdate:extraParams:;
- (void)updateViewWithCubeModel:extraParams:needUpdateGlobalProps:;
- (void)updateViewWithCubeModel:extraParams:needUpdateGlobalProps:needResetData:;
- (void)setWaitCubeModel:;
- (void)setWaitExtraParams:;
- (BOOL)didUpdateData;
- (void)setDidUpdateData:;
- (void)setForceUpdateInThisSession:;
- (void)updateViewWithCubeModel:extraParams:;
- (BOOL)forceUpdateInThisSession;
- (double)fontScaleForCubeWithModel:;
- (void)invokeSchemaInterceptor:;
- (void)setupFetchResourceConfig;
- (id)hasLoadedDict;
- (id)waitCubeModel;
- (id)waitExtraParams;
- (id)createBDXRenderConfig;
- (id)findLastLynxUIIn:withResponseEvent:;
- (void)sendCustomLynxEvent:lynxUI:;
- (id)initWithCubeModel:extraParams:delegate:;
- (void)reloadViewWithCubeModel:extraParams:;
- (void)resetViewWithCubeModel:extraParams:;
- (void)updateViewWithCubeModel:extraParams:waitFinish:;
- (void)safeUpdateWithCubeModel:extraParams:;
- (void)updateGlobalProsAndDataAtTheSameTimeWithCubeModel:extraParams:;
- (void)forceUpdateViewWithCubeModel:;
- (void)registerBDXLocalMethod:;
- (void)resetLynxView;
- (double)calculatePreRenderHeight;
- (void)updateClipsToBounds:;
- (void)componentViewSendLynxCustomEvent:eventParams:viewID:;
- (id)innerLynxView:;
- (void)setGeckoID:;
- (void)setIsPreloadView:;
- (void)setHasLoadedDict:;
- (void)setNativeModuleContext:;
- (void)setCubeMonitor:;
- (void)setMonitor:;
- (id)monitor;
- (void)setDataSize:;
- (BOOL)isLoading;
- (void)dealloc;
- (id)delegate;
- (id)initWithFrame:;
- (id)loadStatus;
- (long long)dataSize;
- (id)containerID;
- (void)setContext:;
- (void).cxx_destruct;
- (id)hitTest:withEvent:;
- (void)setDelegate:;
- (id)context;
- (void)setIsLoading:;
- (id)initWithCoder:;
- (void)resetAnimation;
- (void)restartAnimation;
+ (unsigned long long)serviceScope;
+ (id)serviceBizID;
+ (id)cacheKeyWithLynxUrl:;
+ (unsigned long long)serviceType;
@end
