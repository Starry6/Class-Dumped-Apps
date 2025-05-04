@interface AWEOpenPlatformEditAvatarView : UIView
@property (nonatomic) UIImageView avatarImageView;
@property (nonatomic) UIImageView editIconView;
- (void)updateAvatarWithImage:;
- (void)updateAvatarWithURLList:;
- (id)editIconView;
- (id)getAvatar;
- (void)setEditIconView:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupUI;
- (id)avatarImageView;
- (void)setAvatarImageView:;
@end
