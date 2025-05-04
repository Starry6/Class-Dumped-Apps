@interface AWESearchEcommerceAdMultiGoodsView : AWESearchEcommerceMultiGoodsView
@property (nonatomic) UILabel adTagLabel;
@property (nonatomic) AWEAwemeModel awemeModel;
- (id)awemeModel;
- (void)setAwemeModel:;
- (id)adTagLabel;
- (void)reloadEcommerceModel:;
- (void)setAdTagLabel:;
- (void)updateSubviewWithAdInfo;
- (void).cxx_destruct;
- (void)setupUI;
@end
