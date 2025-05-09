@interface HMDConfigManager : NSObject
@property (nonatomic) HMDConfigStore store;
@property (nonatomic) <HMDConfigFetchResource> fetchResource;
@property (nonatomic) HMDConfigFetcher fetcher;
@property (nonatomic) <HMDConfigDataProcess> dataProcessor;
@property (nonatomic) <HMDConfigHostProvider> provider;
@property (nonatomic) BOOL enablePriorityInversionProtection;
@property (nonatomic) BOOL configFromDefaultDictionary;
@property (nonatomic) BOOL firstFetchingCompleted;
@property (nonatomic) NSString appID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)networkSchedule;
- (void)_asyncFetchRemoteConfigImmediately:;
- (void)_dealResponseFinishWithConfigs:updateAppIDs:;
- (void)_maybeFetchSDKRemoteConfig:;
- (void)addProvider:forAppID:;
- (void)asyncFetchRemoteConfig:;
- (BOOL)configFromDefaultDictionary;
- (id)configPathWithAppID:;
- (id)dataProcessor;
- (void)dataProcessorFinishProcessResponseData:configs:updateAppIDs:;
- (BOOL)enablePriorityInversionProtection;
- (id)fetchResource;
- (BOOL)firstFetchingCompleted;
- (id)mainConfig;
- (id)remoteConfigWithAppID:;
- (void)removeProvider:forAppID:;
- (void)setDataProcessor:;
- (void)setEnablePriorityInversionProtection:;
- (void)setFetchResource:;
- (void)setUpdateInterval:withAppID:;
- (void)setupAsyncWithDefaultInfo:;
- (id)standardizeHost:;
- (void)startFetchSettings:;
- (void)setProvider:;
- (id)init;
- (id)fetcher;
- (void)dealloc;
- (void)setStore:;
- (id)provider;
- (id)appID;
- (void).cxx_destruct;
- (id)store;
- (void)setFetcher:;
+ (id)defaultConfigurationDictionary;
+ (id)sharedInstance;
@end
