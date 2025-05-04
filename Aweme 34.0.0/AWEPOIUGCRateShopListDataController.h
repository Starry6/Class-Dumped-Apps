@interface AWEPOIUGCRateShopListDataController : AWEListDataController
@property (nonatomic) NSNumber cursor;
@property (nonatomic) NSString productId;
@property (nonatomic) AWEPOIUGCRateSelectivePOIBarParamsModel barParamsModel;
- (void)loadMoreWithCompletion:;
- (void)initFetchWithCompletion:;
- (id)barParamsModel;
- (void)setBarParamsModel:;
- (void)loadFeedWithCompletion:isLoadMore:;
- (id)cursor;
- (id)productId;
- (void)setCursor:;
- (void).cxx_destruct;
- (void)refreshWithCompletion:;
- (void)setProductId:;
@end
