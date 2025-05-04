@interface AWEIMMessageTabLeftTextRightIconBannerView : UIView
@property (nonatomic) AWEIMMessageTabLeftTextRightIconBannerModel viewModel;
@property (nonatomic) UIButton backgroundButton;
@property (nonatomic) UILabel textLabel;
@property (nonatomic) UIButton iconButton;
@property (nonatomic) UIView bottomSeparatorLineView;
- (void)configWithViewModel:;
- (void)p_addSubviews;
- (void)p_addPositionConstraints;
- (void)setBackgroundButton:;
- (id)backgroundButton;
- (void)onTapBackground:;
- (void)onTapIcon:;
- (void)configTextLabelWithViewModel:;
- (void)configIconWithViewModel:;
- (void)configBackgroundWithViewModel:;
- (void)configLayoutWithViewModel:;
- (void)configBottomSeparatorLineWithViewModel:;
- (id)bottomSeparatorLineView;
- (void)setBottomSeparatorLineView:;
- (id)textLabel;
- (id)viewModel;
- (id)initWithFrame:;
- (void)setViewModel:;
- (void).cxx_destruct;
- (void)setTextLabel:;
- (id)iconButton;
- (void)setIconButton:;
@end
