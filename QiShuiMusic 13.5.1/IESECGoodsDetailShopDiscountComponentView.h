@interface IESECGoodsDetailShopDiscountComponentView : IESECGoodsDetailBaseComponentView
@property (nonatomic) IESECGoodsActivityShopDiscountView discountInfoView;
- (id)discountInfoView;
- (id)initWithParameters:style:tracker:;
- (void)openMarket;
- (void)setDiscountInfoView:;
- (void).cxx_destruct;
+ (double)componentViewHeight:style:;
+ (BOOL)componentViewShouldShow:style:;
@end
