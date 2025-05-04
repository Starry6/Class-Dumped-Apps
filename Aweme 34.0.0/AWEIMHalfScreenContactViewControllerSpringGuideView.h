@interface AWEIMHalfScreenContactViewControllerSpringGuideView : UIView
@property (nonatomic) CAGradientLayer gradientLayer;
@property (nonatomic) UILabel title;
@property (nonatomic) UILabel subtitle;
@property (nonatomic) UIImageView envelopeIconView;
- (void)awe_themeReload;
- (void)__layoutComponents;
- (void)__createComponentsWithTaskType:viewType:;
- (void)__refreshGradientLayer;
- (id)__createGradientLayer;
- (id)envelopeIconView;
- (void)setEnvelopeIconView:;
- (id)subtitle;
- (id)initWithModel:;
- (void)setSubtitle:;
- (void).cxx_destruct;
- (id)title;
- (void)layoutSubviews;
- (void)setTitle:;
- (id)gradientLayer;
- (void)setGradientLayer:;
@end
