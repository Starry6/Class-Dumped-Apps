@interface IESECGoodsDetailGlobalComponentView : IESECGoodsDetailBaseComponentView
@property (nonatomic) IESECGoodsDetailModel goodsModel;
@property (nonatomic) UILabel globalBrandLabel;
- (void)openGlobalPanel;
- (id)globalBrandLabel;
- (id)goodsModel;
- (id)initWithParameters:style:tracker:;
- (void)setGlobalBrandLabel:;
- (void)setGoodsModel:;
- (void)setupCurrentGlobalView;
- (void)updateWithParameters:;
- (void).cxx_destruct;
- (void)setupAccessibility;
+ (double)componentViewHeight:style:;
+ (BOOL)componentViewShouldShow:style:;
@end
