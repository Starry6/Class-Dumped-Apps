@interface AWEIMOnlineFriendsTableViewCell : UITableViewCell
@property (nonatomic) AWEIMUser user;
@property (nonatomic) UIStackView rightActionView;
@property (nonatomic) UIImageView avatarView;
@property (nonatomic) UILabel nameLabel;
@property (nonatomic) UIButton voiceCallButton;
@property (nonatomic) UIButton textGreetButton;
@property (nonatomic) <AWEIMOnlineFriendsTableViewCellDelegate> delegate;
- (void)configWithUser:;
- (void)setRightActionView:;
- (id)rightActionView;
- (id)voiceCallButton;
- (id)textGreetButton;
- (void)setVoiceCallButton:;
- (void)setTextGreetButton:;
- (id)user;
- (void)setUser:;
- (id)delegate;
- (void)setAvatarView:;
- (id)avatarView;
- (id)initWithStyle:reuseIdentifier:;
- (id)nameLabel;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)setNameLabel:;
- (void)cellTapped:;
@end
