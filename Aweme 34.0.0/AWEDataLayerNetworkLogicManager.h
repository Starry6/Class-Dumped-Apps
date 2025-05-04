@interface AWEDataLayerNetworkLogicManager : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> logicQueue;
- (id)fetchDataWithNetworkProvider:config:completion:;
- (void)setLogicQueue:;
- (id)logicQueue;
- (void)createRequestWithWrapper:;
- (void)getCacheWithWrapper:completion:;
- (void)clearCacheWithWrapper:;
- (id)networkCacheIdentifierWithNetworkProvider:;
- (id)requestConfigFromFetchDataConfig:;
- (void).cxx_destruct;
+ (id)sharedManager;
@end
