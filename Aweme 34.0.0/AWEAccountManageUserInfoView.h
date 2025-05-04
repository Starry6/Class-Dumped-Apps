@interface AWEAccountManageUserInfoView : UIView
@property (nonatomic) DUXAvatar avatarView;
@property (nonatomic) UILabel userNameLabel;
@property (nonatomic) UILabel douyinIdLabel;
@property (nonatomic) UIButton switchAccountButton;
@property (nonatomic) UIButton qrCodeButton;
- (void)qrCodeButtonTapped;
- (id)userNameLabel;
- (void)setUserNameLabel:;
- (id)qrCodeButton;
- (void)setQrCodeButton:;
- (void)setSwitchAccountButton:;
- (id)switchAccountButton;
- (void)switchAccountButtonTapped;
- (void)setDouyinIdLabel:;
- (id)douyinIdLabel;
- (void)douyinIdLabelTapped;
- (void)trackAccountManageClick;
- (void)copyIdString:;
- (void)setAvatarView:;
- (id)initWithFrame:;
- (id)avatarView;
- (void).cxx_destruct;
- (void)setupUI;
- (id)idStr;
@end
