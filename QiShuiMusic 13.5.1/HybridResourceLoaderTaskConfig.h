@interface HybridResourceLoaderTaskConfig : NSObject
@property (nonatomic) NSString accessKey;
@property (nonatomic) NSString channelName;
@property (nonatomic) NSString bundleName;
@property (nonatomic) NSNumber dynamic;
@property (nonatomic) NSNumber waitGeckoUpdate;
@property (nonatomic) NSNumber disableCDNProcessor;
@property (nonatomic) NSNumber disableCDNCache;
@property (nonatomic) NSNumber onlyLocal;
@property (nonatomic) NSNumber disableBuildin;
@property (nonatomic) NSNumber disableGurd;
@property (nonatomic) NSNumber disableGurdUpdate;
@property (nonatomic) NSNumber useForest;
@property (nonatomic) q resourceScene;
@property (nonatomic) NSString monitorSessionUUID;
@property (nonatomic) NSNumber enableMemoryCache;
@property (nonatomic) BOOL enableRequestReuse;
@property (nonatomic) NSString sessionId;
@property (nonatomic) HybridResourceLoaderProcessorConfig processorConfig;
@property (nonatomic) NSString cdnUrl;
@property (nonatomic) NSNumber addTimeStampInTTIdentity;
@property (nonatomic) q loadRetryTimes;
@property (nonatomic) HybridContext context;
@property (nonatomic) NSNumber syncTask;
@property (nonatomic) NSNumber runTaskInGlobalQueue;
@property (nonatomic) NSNumber onlyPath;
@property (nonatomic) NSNumber callerPlatform;
@property (nonatomic) NSNumber fetchResourceType;
@property (nonatomic) NSNumber preloadeInMemory;
@property (nonatomic) NSNumber memoryExpireTime;
@property (nonatomic) double loadCostTime;
@property (nonatomic) double parseCostTime;
@property (nonatomic) double configMergeCostTime;
@property (nonatomic) double createPipelineCostTime;
@property (nonatomic) double memoryCostTime;
@property (nonatomic) double geckoCostTime;
@property (nonatomic) double geckoUpdateCostTime;
@property (nonatomic) double geckoTotalCostTime;
@property (nonatomic) double cdnCacheCostTime;
@property (nonatomic) double cdnCostTime;
@property (nonatomic) double cdnTotalCostTime;
@property (nonatomic) double builtinCostTime;
@property (nonatomic) BOOL cdnRegionRedirect;
@property (nonatomic) NSArray redirectRegions;
- (id)redirectRegions;
- (id)waitGeckoUpdate;
- (double)builtinCostTime;
- (id)disableCDNCache;
- (void)setCdnCostTime:;
- (void)setDisableGurd:;
- (id)addTimeStampInTTIdentity;
- (id)callerPlatform;
- (double)cdnCacheCostTime;
- (double)cdnCostTime;
- (BOOL)cdnRegionRedirect;
- (double)cdnTotalCostTime;
- (id)cdnUrl;
- (double)configMergeCostTime;
- (double)createPipelineCostTime;
- (id)disableBuildin;
- (id)disableCDNProcessor;
- (id)disableGurd;
- (id)disableGurdUpdate;
- (id)enableMemoryCache;
- (BOOL)enableRequestReuse;
- (id)fetchResourceType;
- (double)geckoCostTime;
- (double)geckoTotalCostTime;
- (double)geckoUpdateCostTime;
- (double)loadCostTime;
- (long long)loadRetryTimes;
- (double)memoryCostTime;
- (id)memoryExpireTime;
- (id)monitorSessionUUID;
- (id)onlyLocal;
- (id)onlyPath;
- (double)parseCostTime;
- (id)preloadeInMemory;
- (long long)resourceScene;
- (id)runTaskInGlobalQueue;
- (void)setAddTimeStampInTTIdentity:;
- (void)setBuiltinCostTime:;
- (void)setCallerPlatform:;
- (void)setCdnCacheCostTime:;
- (void)setCdnRegionRedirect:;
- (void)setCdnTotalCostTime:;
- (void)setCdnUrl:;
- (void)setConfigMergeCostTime:;
- (void)setCreatePipelineCostTime:;
- (void)setDisableBuildin:;
- (void)setDisableCDNCache:;
- (void)setDisableCDNProcessor:;
- (void)setDisableGurdUpdate:;
- (void)setEnableMemoryCache:;
- (void)setEnableRequestReuse:;
- (void)setFetchResourceType:;
- (void)setGeckoCostTime:;
- (void)setGeckoTotalCostTime:;
- (void)setGeckoUpdateCostTime:;
- (void)setLoadCostTime:;
- (void)setLoadRetryTimes:;
- (void)setMemoryCostTime:;
- (void)setMemoryExpireTime:;
- (void)setMonitorSessionUUID:;
- (void)setOnlyLocal:;
- (void)setOnlyPath:;
- (void)setParseCostTime:;
- (void)setPreloadeInMemory:;
- (void)setRedirectRegions:;
- (void)setResourceScene:;
- (void)setRunTaskInGlobalQueue:;
- (void)setUseForest:;
- (void)setWaitGeckoUpdate:;
- (id)useForest;
- (void)setSessionId:;
- (id)sessionId;
- (id)context;
- (id)channelName;
- (void)setBundleName:;
- (void).cxx_destruct;
- (void)setContext:;
- (id)bundleName;
- (id)dynamic;
- (void)setDynamic:;
- (id)accessKey;
- (void)setAccessKey:;
- (id)syncTask;
- (void)setSyncTask:;
- (id)processorConfig;
- (void)setProcessorConfig:;
- (void)setChannelName:;
@end
