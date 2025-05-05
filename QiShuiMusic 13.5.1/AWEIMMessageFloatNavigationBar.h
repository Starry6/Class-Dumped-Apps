@interface AWEIMMessageFloatNavigationBar : UIView
@property (nonatomic) UIButton fullButton;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIButton closeButton;
@property (nonatomic) @? fullButtonClickBlock;
@property (nonatomic) @? closeButtonClickBlock;
- (void)closeButtonClick:;
- (id)closeButtonClickBlock;
- (id)fullButton;
- (void)fullButtonClick:;
- (id)fullButtonClickBlock;
- (void)setCloseButtonClickBlock:;
- (void)setFullButton:;
- (void)setFullButtonClickBlock:;
- (void)titleLabelTap:;
- (void)setTitleLabel:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)closeButton;
- (void)setCloseButton:;
- (void)updateWithTitle:;
@end
