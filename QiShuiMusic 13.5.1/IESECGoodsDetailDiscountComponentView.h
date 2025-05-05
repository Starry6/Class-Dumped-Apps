@interface IESECGoodsDetailDiscountComponentView : IESECGoodsDetailBaseComponentView
@property (nonatomic) IESECGoodsActivityCouponView discountInfoView;
- (void)openCouponPanel;
- (id)discountInfoView;
- (id)initWithParameters:style:tracker:;
- (void)setDiscountInfoView:;
- (void).cxx_destruct;
+ (double)componentViewHeight:style:;
+ (BOOL)componentViewShouldShow:style:;
@end
