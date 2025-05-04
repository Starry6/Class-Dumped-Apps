@interface AWEACCPOIServiceImpl : NSObject
@property (nonatomic) <AWEPOISearchLocationDataManagerProtocol> searchPOIDataManger;
@property (nonatomic) <AWEPOISearchLocationDataManagerProtocol> recommendPOIDataManger;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)searchPOIDataManger;
- (void)setSearchPOIDataManger:;
- (void)p_searchPOIWithKeyword:searchType:location:completion:;
- (id)recommendPOIDataManger;
- (id)poiModelsFromResult:;
- (id)createDataManager;
- (void)searchPOIWithKeyword:searchType:completion:;
- (void)loadMorePOIWithKeyword:searchType:completion:;
- (void)setRecommendPOIDataManger:;
- (void).cxx_destruct;
- (BOOL)networkReachable;
@end
