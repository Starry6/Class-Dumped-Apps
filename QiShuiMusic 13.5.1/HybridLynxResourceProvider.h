@interface HybridLynxResourceProvider : NSObject
@property (nonatomic) NSMapTable requestMap;
@property (nonatomic) <HybridLynxResourceProviderDelegate> delegate;
@property (nonatomic) NSString templateSourceURL;
@property (nonatomic) NSString accessKey;
@property (nonatomic) NSString channel;
@property (nonatomic) NSString bundle;
@property (nonatomic) NSNumber dynamic;
@property (nonatomic) NSNumber disableGurd;
@property (nonatomic) NSNumber disableBuildin;
@property (nonatomic) NSNumber enableMemoryCache;
@property (nonatomic) double containerInitCost;
@property (nonatomic) NSNumber useForest;
@property (nonatomic) BOOL lockResource;
@property (nonatomic) NSString sessionId;
@property (nonatomic) NSDictionary templateResData;
@property (nonatomic) LynxView lynxview;
@property (nonatomic) HybridContext context;
@property (nonatomic) BOOL isGeckoUpdate;
@property (nonatomic) <LynxTemplateProvider> customTemplateProvider;
@property (nonatomic) <HybridResourceService> resourceLoader;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)templateResData;
- (void)loadTemplateWithUrl:onComplete:;
- (void)setDisableGurd:;
- (void)cacheImage:uiImage:imageData:cacheType:;
- (double)containerInitCost;
- (id)customTemplateProvider;
- (id)disableBuildin;
- (id)disableGurd;
- (id)enableMemoryCache;
- (void)handleImageCallback:uiImage:error:callback:url:cacheType:;
- (id)imageWithData:downsampling:downsampleSize:;
- (BOOL)isGeckoUpdate;
- (id)loadCanvasImageWithURL:contextInfo:completion:;
- (void)loadDynamicComponent:withLoadedBlock:;
- (id)loadImageWithURL:size:contextInfo:completion:;
- (id)loadResourceWithURL:type:completion:;
- (BOOL)lockResource;
- (id)lynxview;
- (id)redirectURL:;
- (void)request:onComplete:;
- (id)requestMap;
- (void)setContainerInitCost:;
- (void)setCustomTemplateProvider:;
- (void)setDisableBuildin:;
- (void)setEnableMemoryCache:;
- (void)setIsGeckoUpdate:;
- (void)setLockResource:;
- (void)setLynxview:;
- (void)setRequestMap:;
- (void)setTemplateResData:;
- (void)setTemplateSourceURL:;
- (void)setUseForest:;
- (id)templateSourceURL;
- (id)useForest;
- (void)setSessionId:;
- (void)setChannel:;
- (id)sessionId;
- (id)channel;
- (id)context;
- (void)cancel:;
- (void)setResourceLoader:;
- (void)setDelegate:;
- (id)bundle;
- (id)delegate;
- (void).cxx_destruct;
- (void)setContext:;
- (id)resourceLoader;
- (void)setBundle:;
- (id)dynamic;
- (void)setDynamic:;
- (id)accessKey;
- (void)setAccessKey:;
@end
