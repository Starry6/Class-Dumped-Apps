@interface AWEIncentiveChatPrivateChatFriendsCell : UITableViewCell
@property (nonatomic) UIImageView avatarImageView;
@property (nonatomic) UILabel nickNameLabel;
@property (nonatomic) AWEButton actionButton;
@property (nonatomic) AWEIncentiveChatPrivateChatFriendsCellViewModel viewModel;
- (void)setupViewModel;
- (id)nickNameLabel;
- (void)setNickNameLabel:;
- (id)viewModel;
- (id)initWithStyle:reuseIdentifier:;
- (void)setViewModel:;
- (void).cxx_destruct;
- (void)setupUI;
- (id)avatarImageView;
- (id)actionButton;
- (void)setActionButton:;
- (void)setAvatarImageView:;
@end
