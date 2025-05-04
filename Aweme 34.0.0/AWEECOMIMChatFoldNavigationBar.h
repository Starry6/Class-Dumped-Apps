@interface AWEECOMIMChatFoldNavigationBar : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIButton closeButton;
@property (nonatomic) @? closeButtonClickBlock;
- (void)closeButtonClick:;
- (void)setCloseButtonClickBlock:;
- (id)closeButtonClickBlock;
- (void)updateBarWithTitle:;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setupUI;
- (void)setCloseButton:;
- (id)closeButton;
+ (double)designHeight;
@end
