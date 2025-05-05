@interface IESECGoodsFeedResourceCardProductCard : UIView
@property (nonatomic) UIView priceTag;
@property (nonatomic) UIImageView priceHeader;
- (void)setPriceHeader:;
- (id)priceHeader;
- (id)priceTag;
- (void)setPriceTag:;
- (void)updateWithProductModel:showCrossedMarketPrice:fixCrossedMarketPrice:;
- (void)updateWithProductModel:style:;
- (void)layoutSubviews;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupSubviews;
@end
