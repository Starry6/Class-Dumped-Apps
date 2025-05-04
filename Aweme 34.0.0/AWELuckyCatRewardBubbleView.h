@interface AWELuckyCatRewardBubbleView : UIView
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel titleLabel;
- (void)setIconImageURLString:;
- (void)setupGradient;
- (void)playFlashAnimation;
- (id)initWithFrame:;
- (void)setTextColor:;
- (void)setTitleLabel:;
- (id)iconImageView;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)layoutSubviews;
- (void)setTitle:;
- (id)gradientLayer;
- (void)setIconImageView:;
- (void)setupUI;
+ (Class)layerClass;
@end
