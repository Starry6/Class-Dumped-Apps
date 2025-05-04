@interface AWERichAwemeLifeCardImagePriceView : UIView
@property (nonatomic) UILabel priceUnitLabel;
@property (nonatomic) UILabel priceLabel;
@property (nonatomic) UILabel originPriceLabel;
@property (nonatomic) UIView saleView;
@property (nonatomic) UILabel saleLabel;
- (void)setOriginPriceLabel:;
- (id)originPriceLabel;
- (id)saleLabel;
- (void)setSaleLabel:;
- (id)priceUnitLabel;
- (void)setPriceUnitLabel:;
- (void)configSubviewsWithModel:;
- (id)saleView;
- (void)setSaleView:;
- (void).cxx_destruct;
- (id)priceLabel;
- (void)setPriceLabel:;
@end
