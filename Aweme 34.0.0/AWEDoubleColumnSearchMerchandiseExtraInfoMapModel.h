@interface AWEDoubleColumnSearchMerchandiseExtraInfoMapModel : AWEBaseApiModel
@property (nonatomic) q isShopSearch;
@property (nonatomic) q productRank;
@property (nonatomic) NSString fromAlgorithm;
- (long long)isShopSearch;
- (void)setIsShopSearch:;
- (long long)productRank;
- (void)setProductRank:;
- (id)fromAlgorithm;
- (void)setFromAlgorithm:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
