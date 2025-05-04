@interface AWESearchEcommerceGoodsView : UIView
@property (nonatomic) AWESearchEcommerceSingleGoodsView singleGoodsView;
@property (nonatomic) AWESearchEcommerceMultiGoodsView multiGoodsView;
- (void)setSingleGoodsView:;
- (id)singleGoodsView;
- (void)reloadEcommerceModel:;
- (id)multiGoodsView;
- (void)setMultiGoodsView:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupUI;
@end
