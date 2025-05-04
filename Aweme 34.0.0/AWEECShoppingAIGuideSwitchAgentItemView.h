@interface AWEECShoppingAIGuideSwitchAgentItemView : UIView
@property (nonatomic) BOOL selected;
@property (nonatomic) q index;
@property (nonatomic) CAGradientLayer gradientLayer;
@property (nonatomic) UIImageView titleImageView;
@property (nonatomic) UIImageView bgImageView;
@property (nonatomic) UILabel descLabel;
@property (nonatomic) @? onTouchItemViewBlock;
- (id)descLabel;
- (void)setDescLabel:;
- (void)buildConstraint;
- (void)onTapSwitchItemView:;
- (id)onTouchItemViewBlock;
- (void)addGradientBorderToView:withColors:lineWidth:cornerRadius:;
- (void)configViewData:;
- (void)setOnTouchItemViewBlock:;
- (void)setIndex:;
- (long long)index;
- (id)titleImageView;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (BOOL)selected;
- (void)setSelected:;
- (id)gradientLayer;
- (void)setGradientLayer:;
- (void)setTitleImageView:;
- (void)setBgImageView:;
- (id)bgImageView;
@end
