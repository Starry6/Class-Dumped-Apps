@interface AWEUserAccountListTableViewCell : UITableViewCell
@property (nonatomic) UIView containerView;
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) DUXButton actionButton;
@property (nonatomic) DUXTextTag businessAccountTag;
@property (nonatomic) DUXTextTag hotsoonTag;
@property (nonatomic) @? actionButtonBlock;
- (void)actionBtnClicked;
- (void)setActionButtonBlock:;
- (id)actionButtonBlock;
- (void)configWithModel:isCreateNewAccount:;
- (id)aAWEUserModuleServiceCommonAdapter;
- (id)businessAccountTag;
- (id)hotsoonTag;
- (void)setBusinessAccountTag:;
- (void)setHotsoonTag:;
- (void)updateTagForUser:;
- (void)setupUIIsCreateNewAccount:userModel:;
- (void)configActionButtonWithUser:;
- (void)prepareForReuse;
- (id)containerView;
- (void)setContainerView:;
- (id)initWithStyle:reuseIdentifier:;
- (void)setTitleLabel:;
- (id)iconImageView;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setIconImageView:;
- (id)actionButton;
- (void)setActionButton:;
+ (Class)aAWEUserModuleServiceCommonAdapterClass;
@end
