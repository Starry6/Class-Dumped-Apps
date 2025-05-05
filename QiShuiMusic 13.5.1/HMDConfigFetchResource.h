@interface HMDConfigFetchResource : NSObject
@property (nonatomic) double lastFetchTime;
@property (nonatomic) HMDConfigStore store;
@property (nonatomic) <HMDConfigDataProcess> dataProcessor;
@property (nonatomic) <HMDConfigHostProvider> hostProvider;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)checkConfigIsOutOfDate;
- (id)configBodyDictionary;
- (BOOL)configFetcher:finishRequestSuccess:penetrateParams:forAppID:;
- (id)dataProcessor;
- (id)fetchRequestAppIDList;
- (id)fetchRequestForAppID:atIndex:;
- (id)hostProvider;
- (id)initWithStore:dataProcessor:hostProvider:;
- (double)lastFetchTime;
- (unsigned long long)maxRetryCountForAppID:;
- (BOOL)needForceRefreshSettings:;
- (void)setDataProcessor:;
- (void)setHostProvider:;
- (void)setLastFetchTime:;
- (void)setStore:;
- (void).cxx_destruct;
- (id)store;
@end
