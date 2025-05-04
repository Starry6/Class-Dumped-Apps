@interface AWELandingPageUserGuideView : UIView
@property (nonatomic) UIView gradientBgView;
@property (nonatomic) UIImageView iconView;
@property (nonatomic) UILabel descLabel;
- (id)descLabel;
- (void)setDescLabel:;
- (void)setGradientBgView:;
- (id)gradientBgView;
- (id)initWithFrame:;
- (id)iconView;
- (void)setIconView:;
- (void).cxx_destruct;
- (id)hitTest:withEvent:;
- (void)setupUI;
@end
