@interface AWEMessageReachFrequencyManager : NSObject
@property (nonatomic) <AWEMessageReachInternalAbilityProtocol> config;
@property (nonatomic) NSMutableDictionary requestTimeMap;
@property (nonatomic) double globalLastRequestTime;
@property (nonatomic) MMKV mmkv;
@property (nonatomic) BOOL loadCacheComplete;
- (id)mmkv;
- (void)messageReachColdLaunchLoadCacheComplete:;
- (id)requestTimeMap;
- (void)setRequestTimeMap:;
- (double)globalLastRequestTime;
- (void)setGlobalLastRequestTime:;
- (BOOL)verifyRequestFrequencyControlWithTriggerEvent:source:;
- (void)recordRequestTime:triggerEvent:source:;
- (void)loadCacheForColdLaunch:;
- (void)tryLoadCache;
- (BOOL)loadCacheComplete;
- (void)setLoadCacheComplete:;
- (void)setConfig:;
- (id)initWithConfig:;
- (id)config;
- (void).cxx_destruct;
@end
