@interface AWEEcomSearchNewUserStrengthPriceView : UIView
@property (nonatomic) UIImageView trendingImgView;
@property (nonatomic) UILabel priceLabel;
@property (nonatomic) UILabel originPriceLabel;
@property (nonatomic) UIImageView priceTagView;
@property (nonatomic) UIImageView rightIconView;
- (void)setOriginPriceLabel:;
- (id)originPriceLabel;
- (id)rightIconView;
- (void)setRightIconView:;
- (void)configWithMerchandise:;
- (id)makePriceAttributeText:;
- (id)trendingImgView;
- (void)setTrendingImgView:;
- (id)priceTagView;
- (void)setPriceTagView:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)priceLabel;
- (void)setPriceLabel:;
+ (double)viewHeightWithMerchandise:;
@end
