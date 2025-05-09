@interface AWERewardedAdvertisingEventButton : UIView
@property (nonatomic) UIView containerView;
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UIButton eventButton;
@property (nonatomic) UIImageView textRightIconImageView;
@property (nonatomic) q state;
@property (nonatomic) @? onClickedBlock;
- (id)onClickedBlock;
- (void)setOnClickedBlock:;
- (void)makeConstraint;
- (BOOL)enableAdaptLargeFontMode;
- (Class)largeFontAdaptUtilClass;
- (void)setTextRightIconImage:;
- (void)setEventText:;
- (void)setEventText:richText:;
- (void)didClickUnlockButton:;
- (id)textRightIconImageView;
- (void)setTextRightIconImageView:;
- (void)setIconImage:;
- (id)initWithFrame:;
- (id)containerView;
- (long long)state;
- (id)iconSize;
- (void)setContainerView:;
- (id)iconImageView;
- (void).cxx_destruct;
- (void)setState:;
- (void)setIconImageView:;
- (id)titleLabelFont;
- (void)setupUI;
- (void)setEventButton:;
- (id)eventButton;
- (void)setState:completion:;
+ (id)button;
@end
