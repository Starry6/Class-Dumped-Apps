@interface AWEUserListPanelHeaderView : UIView
@property (nonatomic) UILabel countLabel;
@property (nonatomic) UIButton closeBtn;
@property (nonatomic) UIButton tipButton;
@property (nonatomic) BOOL isBGColorWhite;
- (void)setIsBGColorWhite:;
- (BOOL)isBGColorWhite;
- (id)closeBtn;
- (void)setCloseBtn:;
- (id)tipButton;
- (void)setTipButton:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setTitle:;
- (id)countLabel;
- (void)setCountLabel:;
@end
