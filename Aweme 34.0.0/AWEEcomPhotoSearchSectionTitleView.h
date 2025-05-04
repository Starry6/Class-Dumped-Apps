@interface AWEEcomPhotoSearchSectionTitleView : UIView
@property (nonatomic) CAGradientLayer effectGradientLayer;
@property (nonatomic) YYAnimatedImageView headIcon;
@property (nonatomic) UILabel textLabel;
@property (nonatomic) {CGSize=dd} headIconSize;
- (id)headIcon;
- (void)setHeadIcon:;
- (id)effectGradientLayer;
- (id)headIconSize;
- (void)setHeadIconSize:;
- (void)setEffectGradientLayer:;
- (id)textLabel;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setTextLabel:;
- (void)setupUI;
@end
