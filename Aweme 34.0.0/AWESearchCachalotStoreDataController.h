@interface AWESearchCachalotStoreDataController : AWESearchCachalotDataController
@property (nonatomic) NSMutableSet merchandiseShowOnce;
@property (nonatomic) NSDictionary addressDictionary;
@property (nonatomic) NSDictionary sortParams;
- (id)searchScene;
- (void)setAddressDictionary:;
- (void)fetchEcommerceDynamicTabsWithCompletion:;
- (id)merchandiseShowOnce;
- (void)setMerchandiseShowOnce:;
- (long long)requestDataCount;
- (id)customRequestPath;
- (id)customSearchType;
- (Class)customResponseClass;
- (Class)customRequestParamsClass;
- (id)customInnerVCModelsFromOuterDataModels:;
- (id)customAwemeModelFromOuterDataModel:;
- (BOOL)cachalot_refreshWithCompletion:;
- (void)updateRequestParams;
- (void)setSortParams:;
- (void)trackUserInfoDisplayWithModel:at:keyword:;
- (void)trackMerchandiseGoods:indexPath:keyword:entranceInfo:;
- (void)updateAddressDictionary:;
- (id)sortParams;
- (id)addressDictionary;
- (void).cxx_destruct;
@end
