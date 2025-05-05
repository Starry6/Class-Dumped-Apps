@interface IESECGoodsDetailRecommendDataModel : IESECBaseApiModel
@property (nonatomic) NSArray goodsRecommendDataSource;
@property (nonatomic) q pageNum;
- (long long)pageNum;
- (id)goodsRecommendDataSource;
- (void)setGoodsRecommendDataSource:;
- (void)setPageNum:;
- (void).cxx_destruct;
@end
