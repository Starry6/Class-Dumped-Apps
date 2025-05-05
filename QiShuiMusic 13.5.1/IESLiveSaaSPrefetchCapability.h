@interface IESLiveSaaSPrefetchCapability : NSObject
@property (nonatomic) HTSLiveApi apiClient;
@property (nonatomic) <IESLiveMonitor> monitor;
@property (nonatomic) IESLiveSaaSPrefetchCacheManager storage;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)customConfigForProject:version:;
- (id)apiClient;
- (id)customCacheStorage;
- (id)envVariables;
- (void)monitorService:metric:category:extra:;
- (void)networkForRequest:completion:;
- (void)setApiClient:;
- (id)init;
- (void)setStorage:;
- (void)setMonitor:;
- (id)storage;
- (void).cxx_destruct;
- (id)monitor;
@end
