@interface IESECWinLiveTabMarketingPriceComponent : UIView
@property (nonatomic) UIView backView;
@property (nonatomic) IESECGoodsPriceLabel priceLabel;
@property (nonatomic) IESECGoodsPriceLabel marketingPriceLabel;
@property (nonatomic) UIView buyButtonBackView;
@property (nonatomic) UILabel buyLabel;
- (id)buyButtonBackView;
- (id)marketingPriceLabel;
- (void)p_setupUI;
- (void)setBuyButtonBackView:;
- (void)setMarketingPriceLabel:;
- (void)updateUIWithModel:;
- (id)init;
- (id)backView;
- (void)setBackView:;
- (void).cxx_destruct;
- (id)priceLabel;
- (void)setPriceLabel:;
- (void)setBuyLabel:;
- (id)buyLabel;
+ (id)marketingPriceWithHeight:;
@end
