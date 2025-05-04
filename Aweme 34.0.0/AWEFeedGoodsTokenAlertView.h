@interface AWEFeedGoodsTokenAlertView : UIView
@property (nonatomic) UIView ecommerceContanierView;
@property (nonatomic) UILabel saleLabel;
@property (nonatomic) IESECGoodsPriceLabel priceLabel;
- (id)initWithPrice:sale:maxPrice:;
- (void)configUIWithPrice:sale:maxPrice:;
- (id)saleLabel;
- (id)ecommerceContanierView;
- (void)setEcommerceContanierView:;
- (void)setSaleLabel:;
- (void).cxx_destruct;
- (void)setupUI;
- (id)priceLabel;
- (void)setPriceLabel:;
@end
