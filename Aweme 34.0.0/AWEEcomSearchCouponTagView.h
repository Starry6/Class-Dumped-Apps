@interface AWEEcomSearchCouponTagView : UIView
@property (nonatomic) UIStackView tagStackView;
@property (nonatomic) UILabel textLabel;
@property (nonatomic) UIView labelBackground;
@property (nonatomic) UIImageView iconImage;
@property (nonatomic) AWEEcomSearchCouponTagViewUIConfig config;
@property (nonatomic) CAGradientLayer gradientLayer;
- (void)setTagWithText:andIconUrl:tagStyle:;
- (void)setTagUIWithConfig:;
- (id)tagStackView;
- (void)setTagStackView:;
- (id)labelBackground;
- (void)updateLabelConstraintWithConfig:;
- (void)setLabelBackground:;
- (id)textLabel;
- (void)setConfig:;
- (id)iconImage;
- (id)intrinsicContentSize;
- (void)setIconImage:;
- (id)config;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)gradientLayer;
- (void)setGradientLayer:;
- (void)setTextLabel:;
- (void)setupViews;
@end
