@interface BDXUGOptimizeConfig : NSObject
@property (nonatomic) NSArray prefetchList;
@property (nonatomic) NSArray preloadList;
@property (nonatomic) <BDXBridgeNetworkServiceProtocol> networkService;
- (void)setPreloadList:;
- (id)prefetchList;
- (id)preloadList;
- (void)setPrefetchList:;
- (void)setNetworkService:;
- (void).cxx_destruct;
- (id)networkService;
@end
