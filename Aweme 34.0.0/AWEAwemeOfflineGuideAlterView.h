@interface AWEAwemeOfflineGuideAlterView : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel textLabel;
@property (nonatomic) UIView dimmingView;
@property (nonatomic) UIView contentView;
@property (nonatomic) AWEUIButton agreeButton;
@property (nonatomic) AWEUIButton disagreeButton;
@property (nonatomic) @? confirmBlock;
@property (nonatomic) @? cancelBlock;
- (id)confirmBlock;
- (void)setConfirmBlock:;
- (id)agreeButton;
- (void)setAgreeButton:;
- (id)disagreeButton;
- (void)agreeButtonClicked;
- (void)disagreeButtonClicked;
- (void)showAlertWithConfirm:cancel:;
- (void)setDisagreeButton:;
- (id)textLabel;
- (void)setDimmingView:;
- (id)dimmingView;
- (void)setCancelBlock:;
- (id)initWithFrame:;
- (id)contentView;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (void)setContentView:;
- (id)titleLabel;
- (id)cancelBlock;
- (void)setTextLabel:;
- (void)setupUI;
- (void)dismissViewWithCompletion:;
@end
