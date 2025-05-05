@interface IESECGoodsDetailCouponComponentView : IESECGoodsDetailBaseComponentView
@property (nonatomic) IESECGoodsServiceCouponView couponInfoView;
- (void)openCouponPanel;
- (id)couponInfoView;
- (id)initWithParameters:style:tracker:;
- (void)setCouponInfoView:;
- (void)updateLayoutWithComponentsViewStyle:;
- (void)updateWithParameters:;
- (void).cxx_destruct;
+ (double)componentViewHeight:style:;
+ (BOOL)componentViewShouldShow:style:;
@end
