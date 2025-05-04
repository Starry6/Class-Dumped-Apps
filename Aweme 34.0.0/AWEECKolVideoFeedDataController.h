@interface AWEECKolVideoFeedDataController : AWEListDataController
@property (nonatomic) q pageNum;
@property (nonatomic) NSDictionary extraParams;
@property (nonatomic) NSString productID;
@property (nonatomic) NSString kolEnterFrom;
@property (nonatomic) NSDictionary productParams;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)loadMoreWithCompletion:;
- (void)setExtraParams:;
- (id)extraParams;
- (void)initFetchWithCompletion:;
- (void)requestNextPageWithCompletion:;
- (void)setPageNum:;
- (long long)pageNum;
- (id)kolEnterFrom;
- (void)fetchECGoodsVideoListWithParameters:completion:;
- (void)setKolEnterFrom:;
- (id)productParams;
- (void)setProductParams:;
- (void)setProductID:;
- (id)init;
- (id)productID;
- (void).cxx_destruct;
- (void)refreshWithCompletion:;
@end
