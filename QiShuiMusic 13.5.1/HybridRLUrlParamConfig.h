@interface HybridRLUrlParamConfig : NSObject
@property (nonatomic) HybridRLOperator advancedOperator;
@property (nonatomic) NSString url;
@property (nonatomic) NSString sourceURL;
@property (nonatomic) NSString accessKey;
@property (nonatomic) NSString channelName;
@property (nonatomic) NSString bundleName;
@property (nonatomic) q dynamic;
@property (nonatomic) BOOL onlyLocal;
@property (nonatomic) NSNumber isDevelopNumber;
@property (nonatomic) NSNumber enableMemoryCache;
@property (nonatomic) BOOL disableCDNProcessor;
@property (nonatomic) HybridRLRemoteConfig remoteConfig;
@property (nonatomic) HybridResourceLoaderConfig loaderConfig;
@property (nonatomic) HybridResourceLoaderTaskConfig taskConfig;
@property (nonatomic) NSString res_gfm;
@property (nonatomic) NSString res_bfm;
@property (nonatomic) NSString res_cfm;
@property (nonatomic) BOOL m_isGurdUpdate;
@property (nonatomic) BOOL m_isFromMemory;
@property (nonatomic) double m_total;
@property (nonatomic) double m_parse;
@property (nonatomic) double m_merge;
@property (nonatomic) double m_create_pipeline;
@property (nonatomic) double g_total;
@property (nonatomic) double g_local;
@property (nonatomic) double g_update;
@property (nonatomic) double b_total;
@property (nonatomic) double c_total;
@property (nonatomic) double me_total;
@property (nonatomic) BOOL hasPH;
@property (nonatomic) q endOfPH;
@property (nonatomic) double ph_total;
@property (nonatomic) q beginOfPL;
@property (nonatomic) BOOL hasPL;
@property (nonatomic) double pl_total;
- (double)b_total;
- (double)c_total;
- (double)g_total;
- (double)m_merge;
- (double)m_parse;
- (id)paramConfigInfo;
- (id)res_bfm;
- (BOOL)disableCDNCache;
- (long long)endOfPH;
- (double)g_local;
- (BOOL)hasDevelopParam;
- (id)isDevelopNumber;
- (double)m_total;
- (id)res_cfm;
- (id)res_gfm;
- (id)advancedOperator;
- (long long)beginOfPL;
- (id)cdnURL;
- (BOOL)containUrl:inArray:;
- (BOOL)disableBuildin;
- (BOOL)disableCDN;
- (BOOL)disableCDNProcessor;
- (BOOL)disableGecko;
- (BOOL)disableGurdUpdate;
- (id)enableMemoryCache;
- (BOOL)enableNegotiation;
- (BOOL)enablePreloadeInMemory;
- (id)extractURLDetail:;
- (id)extractURLDetail:withPrefixList:;
- (id)findPrefixInParams;
- (double)g_update;
- (BOOL)hasPH;
- (BOOL)hasPL;
- (id)initWithUrl:loaderConfig:taskConfig:advOperator:;
- (BOOL)isRemoteConfig;
- (BOOL)isSchema;
- (BOOL)isWeb;
- (BOOL)isWithInConfig;
- (id)loadRetryTimes;
- (id)loaderConfig;
- (double)m_create_pipeline;
- (BOOL)m_isFromMemory;
- (BOOL)m_isGurdUpdate;
- (double)maxCDNCacheLifeTime;
- (double)me_total;
- (double)memoryExpireTime;
- (BOOL)onlyLocal;
- (BOOL)onlyPath;
- (double)ph_total;
- (double)pl_total;
- (id)processorsSequence;
- (void)provideMetricForTaskConfig;
- (BOOL)runTaskInGlobalQueue;
- (void)setAdvancedOperator:;
- (void)setB_total:;
- (void)setBeginOfPL:;
- (void)setC_total:;
- (void)setDisableCDNProcessor:;
- (void)setEnableMemoryCache:;
- (void)setEndOfPH:;
- (void)setG_local:;
- (void)setG_total:;
- (void)setG_update:;
- (void)setHasPH:;
- (void)setHasPL:;
- (void)setIsDevelopNumber:;
- (void)setLoaderConfig:;
- (void)setM_create_pipeline:;
- (void)setM_isFromMemory:;
- (void)setM_isGurdUpdate:;
- (void)setM_merge:;
- (void)setM_parse:;
- (void)setM_total:;
- (void)setMe_total:;
- (void)setOnlyLocal:;
- (void)setPh_total:;
- (void)setPl_total:;
- (void)setRemoteConfig:;
- (void)setRes_bfm:;
- (void)setRes_cfm:;
- (void)setRes_gfm:;
- (void)setTaskConfig:;
- (id)shuffleDomains;
- (id)taskConfig;
- (BOOL)useMemoryCache;
- (BOOL)isTemplate;
- (id)url;
- (void)dealloc;
- (void)setSourceURL:;
- (id)sourceURL;
- (void)setUrl:;
- (id)channelName;
- (void)setBundleName:;
- (void).cxx_destruct;
- (id)bundleName;
- (long long)dynamic;
- (void)setDynamic:;
- (id)accessKey;
- (void)setAccessKey:;
- (BOOL)syncTask;
- (void)setChannelName:;
- (id)remoteConfig;
+ (id)judgeAccessKey:remoteConfig:taskConfig:loaderConfig:;
@end
