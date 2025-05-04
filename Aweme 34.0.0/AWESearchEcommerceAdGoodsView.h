@interface AWESearchEcommerceAdGoodsView : AWESearchEcommerceGoodsView
@property (nonatomic) AWESearchEcommerceAdSingleGoodsView adSingleGoodsView;
@property (nonatomic) AWESearchEcommerceAdMultiGoodsView adMultiGoodsView;
@property (nonatomic) AWEAwemeModel awemeModel;
- (id)awemeModel;
- (void)setAwemeModel:;
- (void)reloadEcommerceModel:;
- (id)adSingleGoodsView;
- (id)adMultiGoodsView;
- (void)trackOtherShowWithAweme:;
- (void)setAdSingleGoodsView:;
- (void)setAdMultiGoodsView:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupUI;
@end
