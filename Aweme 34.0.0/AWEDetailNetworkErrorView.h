@interface AWEDetailNetworkErrorView : UIView
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel informativeTextLabel;
@property (nonatomic) AWEButton primaryButton;
@property (nonatomic) UIButton solutionButton;
- (void)p_setupUI;
- (id)solutionButton;
- (void)setSolutionButton:;
- (id)informativeTextLabel;
- (void)p_configureLayout;
- (void)setInformativeTextLabel:;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (id)iconImageView;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setIconImageView:;
- (id)primaryButton;
- (void)setPrimaryButton:;
@end
