@interface BDXLynxKitParams : BDXKitParams
@property (nonatomic) NSString originURL;
@property (nonatomic) BOOL enableCacheTemplateBundle;
@property (nonatomic) BDXMonitor lifeCycleMonitor;
@property (nonatomic) BDXTracertMonitor tracertMonitor;
@property (nonatomic) @ initialProperties;
@property (nonatomic) NSString initialPropertiesState;
@property (nonatomic) BOOL prefetchToGlobalProps;
@property (nonatomic) NSDictionary prefetchInitData;
@property (nonatomic) @? localInitDataBlock;
@property (nonatomic) BOOL enableMarkReadOnly;
@property (nonatomic) BDXPreCreateTemplateRenderContext preCreateTemplateRenderContext;
@property (nonatomic) NSData templateData;
@property (nonatomic) {CGSize=dd} preferMetrixScreenSize;
@property (nonatomic) BDXResourceLoaderConfig loaderConfig;
@property (nonatomic) <LynxImageFetcher> imageFetcher;
@property (nonatomic) NSArray imageCacheSharedDomainList;
@property (nonatomic) <LynxResourceFetcher> resourceFetcher;
@property (nonatomic) <LynxTemplateProvider> templateProvider;
@property (nonatomic) <LynxDynamicComponentFetcher> dynamicComponentFetcher;
@property (nonatomic) q dynamic;
@property (nonatomic) NSString geckoUpdatePolicy;
@property (nonatomic) NSString channel;
@property (nonatomic) NSString bundle;
@property (nonatomic) NSNumber disableGurd;
@property (nonatomic) NSNumber disableBuildin;
@property (nonatomic) NSNumber disableMemory;
@property (nonatomic) NSNumber disableCDNCache;
@property (nonatomic) NSString sourceUrl;
@property (nonatomic) NSString localUrl;
@property (nonatomic) NSString containerBid;
@property (nonatomic) NSString virtualAid;
@property (nonatomic) LynxTemplateData lynxInitData;
@property (nonatomic) @ templateBundle;
@property (nonatomic) BOOL enableFluencyCollection;
@property (nonatomic) NSString lynxVerifyEnterFrom;
@property (nonatomic) BOOL useSyncResourceLoadStrategy;
@property (nonatomic) BOOL useAutoResourceLoadStrategy;
@property (nonatomic) IESForestRequestParameters forestRequestParams;
@property (nonatomic) @? forestRequestDidCreated;
@property (nonatomic) BDXSeperateRenderContext seperateRenderContext;
@property (nonatomic) @? beforeCreateLynxView;
@property (nonatomic) @? rawViewBuilderBlock;
@property (nonatomic) @? lynxViewDidInit;
@property (nonatomic) @? firstScreenFinishCompletion;
@property (nonatomic) @? tasmFinishCompletion;
@property (nonatomic) BOOL isMonitorEnabled;
@property (nonatomic) @ monitorSettingModel;
@property (nonatomic) BOOL screenSizeAdaptation;
@property (nonatomic) NSString groupContext;
@property (nonatomic) NSArray extraJSPaths;
@property (nonatomic) BOOL disableShare;
@property (nonatomic) BOOL disableAutoExpose;
@property (nonatomic) q widthMode;
@property (nonatomic) q heightMode;
@property (nonatomic) q threadStrategy;
@property (nonatomic) NSNumber enableSafePoint;
@property (nonatomic) NSNumber presetWidth;
@property (nonatomic) NSNumber presetHeight;
@property (nonatomic) LynxLoadMeta loadMeta;
@property (nonatomic) NSArray bridgesDispatchDirectly;
@property (nonatomic) NSArray elements;
@property (nonatomic) BOOL enablePendingJsTask;
@property (nonatomic) BOOL enableMultiAsyncThread;
@property (nonatomic) BOOL enableUIOperationQueue;
@property (nonatomic) NSArray customUIElements;
@property (nonatomic) NSNumber enableCanvasOptimize;
@property (nonatomic) BOOL enableCanvas;
@property (nonatomic) BOOL enableAnimaX;
@property (nonatomic) BOOL enableSSR;
@property (nonatomic) q enableSeperateSSR;
@property (nonatomic) BOOL enableAirStrictMode;
@property (nonatomic) Q airActionStrategy;
@property (nonatomic) NSDictionary globalProps;
@property (nonatomic) BOOL fromAnnieX;
@property (nonatomic) double fontScale;
@property (nonatomic) double viewZoom;
@property (nonatomic) NSString accessKey;
@property (nonatomic) @? appThemeBlock;
@property (nonatomic) NSString bridgeNameSpace;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setFirstScreenFinishCompletion:;
- (id)disableCDNCache;
- (id)enableSafePoint;
- (id)lynxViewDidInit;
- (id)resourceFetcher;
- (void)setDisableGurd:;
- (void)setPresetWidth:;
- (void)setUseAutoResourceLoadStrategy:;
- (void)setUseSyncResourceLoadStrategy:;
- (unsigned long long)airActionStrategy;
- (id)beforeCreateLynxView;
- (id)bridgesDispatchDirectly;
- (void)cacheTemplateBundle:;
- (id)containerBid;
- (id)customUIElements;
- (BOOL)disableAutoExpose;
- (id)disableBuildin;
- (id)disableGurd;
- (id)disableMemory;
- (BOOL)disableShare;
- (id)dynamicComponentFetcher;
- (BOOL)enableAirStrictMode;
- (BOOL)enableAnimaX;
- (BOOL)enableCacheTemplateBundle;
- (BOOL)enableCanvas;
- (id)enableCanvasOptimize;
- (BOOL)enableFluencyCollection;
- (BOOL)enableMarkReadOnly;
- (BOOL)enableMultiAsyncThread;
- (BOOL)enablePendingJsTask;
- (BOOL)enableSSR;
- (long long)enableSeperateSSR;
- (BOOL)enableUIOperationQueue;
- (id)extraJSPaths;
- (id)firstScreenFinishCompletion;
- (id)forestRequestDidCreated;
- (id)forestRequestParams;
- (id)geckoUpdatePolicy;
- (long long)heightMode;
- (id)imageCacheSharedDomainList;
- (id)initialPropertiesState;
- (BOOL)isMonitorEnabled;
- (id)lifeCycleMonitor;
- (id)loadMeta;
- (id)loaderConfig;
- (id)localInitDataBlock;
- (id)localUrl;
- (id)lynxInitData;
- (id)lynxVerifyEnterFrom;
- (id)monitorSettingModel;
- (id)preCreateTemplateRenderContext;
- (id)preferMetrixScreenSize;
- (id)prefetchInitData;
- (BOOL)prefetchToGlobalProps;
- (id)presetHeight;
- (id)presetWidth;
- (id)rawViewBuilderBlock;
- (BOOL)screenSizeAdaptation;
- (id)seperateRenderContext;
- (void)setAirActionStrategy:;
- (void)setBeforeCreateLynxView:;
- (void)setBridgesDispatchDirectly:;
- (void)setContainerBid:;
- (void)setCustomUIElements:;
- (void)setDisableAutoExpose:;
- (void)setDisableBuildin:;
- (void)setDisableCDNCache:;
- (void)setDisableMemory:;
- (void)setDisableShare:;
- (void)setDynamicComponentFetcher:;
- (void)setEnableAirStrictMode:;
- (void)setEnableAnimaX:;
- (void)setEnableCacheTemplateBundle:;
- (void)setEnableCanvas:;
- (void)setEnableCanvasOptimize:;
- (void)setEnableFluencyCollection:;
- (void)setEnableMarkReadOnly:;
- (void)setEnableMultiAsyncThread:;
- (void)setEnablePendingJsTask:;
- (void)setEnableSSR:;
- (void)setEnableSafePoint:;
- (void)setEnableSeperateSSR:;
- (void)setEnableUIOperationQueue:;
- (void)setExtraJSPaths:;
- (void)setForestRequestDidCreated:;
- (void)setForestRequestParams:;
- (void)setGeckoUpdatePolicy:;
- (void)setHeightMode:;
- (void)setImageCacheSharedDomainList:;
- (void)setImageFetcher:;
- (void)setInitialPropertiesState:;
- (void)setIsMonitorEnabled:;
- (void)setLifeCycleMonitor:;
- (void)setLoadMeta:;
- (void)setLoaderConfig:;
- (void)setLocalInitDataBlock:;
- (void)setLocalUrl:;
- (void)setLynxInitData:;
- (void)setLynxVerifyEnterFrom:;
- (void)setLynxViewDidInit:;
- (void)setMonitorSettingModel:;
- (void)setPreCreateTemplateRenderContext:;
- (void)setPreferMetrixScreenSize:;
- (void)setPrefetchInitData:;
- (void)setPrefetchToGlobalProps:;
- (void)setPresetHeight:;
- (void)setRawViewBuilderBlock:;
- (void)setResourceFetcher:;
- (void)setScreenSizeAdaptation:;
- (void)setSeperateRenderContext:;
- (void)setTasmFinishCompletion:;
- (void)setTemplateBundle:;
- (void)setTemplateData:;
- (void)setThreadStrategy:;
- (void)setTracertMonitor:;
- (void)setVirtualAid:;
- (void)setWidthMode:;
- (id)tasmFinishCompletion;
- (id)templateBundle;
- (id)templateData;
- (long long)threadStrategy;
- (id)tracertMonitor;
- (BOOL)useAutoResourceLoadStrategy;
- (BOOL)useSyncResourceLoadStrategy;
- (id)virtualAid;
- (long long)widthMode;
- (id)queryItems;
- (void)updateWithDictionary:;
- (void)setChannel:;
- (id)channel;
- (id)elements;
- (void)setElements:;
- (void)setQueryItems:;
- (id)bundle;
- (void).cxx_destruct;
- (id)groupContext;
- (void)setBundle:;
- (long long)dynamic;
- (void)setDynamic:;
- (id)sourceUrl;
- (void)setSourceUrl:;
- (id)initialProperties;
- (void)setInitialProperties:;
- (id)originURL;
- (void)setOriginURL:;
- (void)setGroupContext:;
- (id)templateProvider;
- (void)setTemplateProvider:;
- (id)imageFetcher;
+ (id)lynxKitParamsWithDictionary:;
+ (void)updateLynxKitParams:resourceModel:;
@end
