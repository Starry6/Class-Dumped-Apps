@interface AWEIMPrivateChatManagementHelperHeaderView : UITableViewHeaderFooterView
@property (nonatomic) UIView headerBaseView;
@property (nonatomic) UILabel headerTitleLabel;
@property (nonatomic) UIButton headerActionBtn;
@property (nonatomic) UIImageView headerImageView;
@property (nonatomic) @? actionBlock;
- (void)__setupUI;
- (void)configWithTitle:;
- (id)headerBaseView;
- (void)setHeaderBaseView:;
- (id)headerActionBtn;
- (void)__btnClicked;
- (void)configWithTitle:attributedButtonTitle:imageName:;
- (void)setHeaderActionBtn:;
- (void).cxx_destruct;
- (id)initWithReuseIdentifier:;
- (void)setActionBlock:;
- (id)actionBlock;
- (id)headerImageView;
- (void)setHeaderImageView:;
- (id)headerTitleLabel;
- (void)setHeaderTitleLabel:;
+ (id)identifier;
@end
