@interface IESECGoodsFeedDiversionBannerComponentView : IESECGoodsDetailBaseComponentView
@property (nonatomic) UILabel diversionLabel;
@property (nonatomic) UIImageView arrowImageView;
@property (nonatomic) IESECGradientView gradientView;
- (id)diversionLabel;
- (id)initWithParameters:style:tracker:;
- (void)openMarket;
- (void)setDiversionLabel:;
- (void)updateGradientColors:;
- (void)updateWithParameters:;
- (id)gradientView;
- (void).cxx_destruct;
- (void)setGradientView:;
- (void)setupUI;
- (id)arrowImageView;
- (void)setArrowImageView:;
+ (double)componentViewHeight:style:;
+ (BOOL)componentViewShouldShow:style:;
@end
