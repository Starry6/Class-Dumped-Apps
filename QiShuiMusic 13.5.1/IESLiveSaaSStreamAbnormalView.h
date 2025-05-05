@interface IESLiveSaaSStreamAbnormalView : UIView
@property (nonatomic) UIImageView backGroundView;
@property (nonatomic) UIImageView coffeeImageView;
@property (nonatomic) CAGradientLayer gradientLayer;
- (id)coffeeImageView;
- (id)backGroundView;
- (void)setBackGroundView:;
- (void)setCoffeeImageView:;
- (void)updateFrameWithContainerView:topMargin:;
- (void)updateWithContainerView:;
- (id)init;
- (void)layoutSubviews;
- (id)gradientLayer;
- (void).cxx_destruct;
- (void)setGradientLayer:;
- (void)setupUI;
@end
