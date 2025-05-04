@interface AWEMixVideoHorizontalCellHeader : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) DUXTextTag textTag;
@property (nonatomic) UIButton moreTitleButton;
@property (nonatomic) UIView titleHandleView;
- (void)setThemeStyle:;
- (id)textTag;
- (void)configWithMixVideoModel:tagTitle:;
- (id)titleHandleView;
- (id)moreTitleButton;
- (void)setMoreTitleButton:;
- (void)setTitleHandleView:;
- (id)accessibilityElements;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (BOOL)isAccessibilityElement;
- (void)setupUI;
- (void)setTextTag:;
+ (double)headerHeight;
+ (id)titleFont;
@end
