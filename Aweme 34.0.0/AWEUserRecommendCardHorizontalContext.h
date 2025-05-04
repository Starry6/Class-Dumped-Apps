@interface AWEUserRecommendCardHorizontalContext : NSObject
@property (nonatomic) double leftInset;
@property (nonatomic) UIFont headerFont;
@property (nonatomic) {CGSize=dd} cardSize;
@property (nonatomic) double cardSpacing;
@property (nonatomic) AWEUserRecommendCardBaseCellViewConfig cardConfig;
- (void)setCardConfig:;
- (id)cardConfig;
- (id)init;
- (void)setLeftInset:;
- (id)headerFont;
- (double)leftInset;
- (void).cxx_destruct;
- (void)setHeaderFont:;
- (id)cardSize;
- (void)setCardSize:;
- (void)setCardSpacing:;
- (double)cardSpacing;
@end
