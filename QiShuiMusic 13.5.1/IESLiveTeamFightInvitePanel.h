@interface IESLiveTeamFightInvitePanel : UIView
@property (nonatomic) UIImageView avatarView;
@property (nonatomic) UILabel nicknameLabel;
@property (nonatomic) HTSLiveUser user;
@property (nonatomic) q seatIndex;
@property (nonatomic) @? actionBlock;
@property (nonatomic) @? inviteBlock;
- (void)setInviteBlock:;
- (id)createJoinTeamButtonWithTag:title:backgroundColor:cornerRadius:action:;
- (void)didTapInviteJoinTeamButton:;
- (id)initWithFrame:user:block:DIContext:;
- (id)inviteBlock;
- (long long)seatIndex;
- (void)setSeatIndex:;
- (void)setUser:;
- (id)avatarView;
- (id)actionBlock;
- (void)setAvatarView:;
- (id)user;
- (void).cxx_destruct;
- (void)setupUI;
- (void)setActionBlock:;
- (id)nicknameLabel;
- (void)setNicknameLabel:;
@end
