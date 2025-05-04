@interface AWEDanmakuLightHorizontalStylePopoverItemView : UIView
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UILabel descLabel;
@property (nonatomic) AWEDanmakuPopoverItemDescLabelConfig descLabelConfig;
- (id)descLabel;
- (void)setDescLabel:;
- (void)setUI;
- (void)setDescLabelConfig:;
- (void)configBasicParams;
- (id)descLabelConfig;
- (void)configDescLabelText:textColor:;
- (void)layoutDescLabelIfNeed:update:;
- (id)initWithImage:descLabelConfig:;
- (void)updateDescLabelIfNeed:textColor:;
- (void)showDiggAnimationIfNeed:;
- (void).cxx_destruct;
- (void)setImageView:;
- (id)imageView;
- (void)updateImage:;
+ (id)descLabelFont;
@end
