@interface IESECShopRecommendMallProductItem : UIView
@property (nonatomic) UIImageView productsImageView;
@property (nonatomic) UIView maskView;
@property (nonatomic) UIView priceBottom;
@property (nonatomic) IESECGoodsPriceLabel priceLabel;
- (void)setPriceBottom:;
- (id)priceBottom;
- (id)productsImageView;
- (void)setProductsImageView:;
- (id)maskView;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setMaskView:;
- (void)setupUI;
- (void)updateWithModel:;
- (id)priceLabel;
- (void)setPriceLabel:;
@end
