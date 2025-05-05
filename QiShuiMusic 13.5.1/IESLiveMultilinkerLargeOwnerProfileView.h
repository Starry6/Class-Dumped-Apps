@interface IESLiveMultilinkerLargeOwnerProfileView : UIView
@property (nonatomic) UIImageView avatarView;
@property (nonatomic) UILabel nicknameLabel;
@property (nonatomic) IESLiveImageView muteImageView;
- (id)initWithDIContext:user:;
- (BOOL)isMutImageViewHidden;
- (id)muteImageView;
- (void)setMuteImageView:;
- (void)setNicknameLabelHidden:;
- (id)avatarView;
- (void)setAvatarView:;
- (void).cxx_destruct;
- (void)updateUserInfo:;
- (id)nicknameLabel;
- (void)setNicknameLabel:;
- (void)layoutUI;
@end
