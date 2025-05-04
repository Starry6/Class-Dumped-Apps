@interface AWEProfileShopView : UIView
@property (nonatomic) UIImageView shopArrowView;
@property (nonatomic) UIButton shopButton;
@property (nonatomic) UIView goodsYellowDot;
@property (nonatomic) UIView sepView;
@property (nonatomic) BOOL shouldShowcase;
- (id)sepView;
- (void)setSepView:;
- (id)shopButton;
- (void)setShopButton:;
- (void)setShouldShowcase:;
- (BOOL)shouldShowcase;
- (void)updateAccessibilityLabel:;
- (id)goodsYellowDot;
- (id)shopArrowView;
- (id)initWithShouldShowcase:;
- (void)updateShopViewWithCommerceShowcaseName:isShopIronMan:isCurrentUser:hasNewGoods:shouldShowcase:;
- (void)hideNewGoodsHint;
- (void)setShopArrowView:;
- (void)setGoodsYellowDot:;
- (void).cxx_destruct;
- (void)setupUI;
@end
