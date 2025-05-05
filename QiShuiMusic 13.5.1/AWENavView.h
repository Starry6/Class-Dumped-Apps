@interface AWENavView : UIView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIButton backButton;
@property (nonatomic) NSString title;
@property (nonatomic) @? backAction;
- (void)addDefaultConstraints;
- (id)initWithTitle:backAction:;
- (void)setBackButtonImageColor:;
- (void)setIesim_disableLocalizations:;
- (void)setTitleLabel:;
- (id)backButton;
- (void)setTitleColor:;
- (void)setTitle:;
- (void)setBackAction:;
- (id)title;
- (void).cxx_destruct;
- (id)backAction;
- (id)titleLabel;
- (void)setBackButton:;
- (void)setBackButtonImage:;
- (void)backButtonTapped:;
- (void)_setupUI;
- (void)updateTitle:;
@end
