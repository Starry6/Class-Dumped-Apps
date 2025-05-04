@interface AWETeenUserAvatarView : UIView
@property (nonatomic) UIImageView avatarImageView;
@property (nonatomic) UIImageView verifyImageView;
@property (nonatomic) q userAvatarSizeType;
@property (nonatomic) q avatarThemeType;
@property (nonatomic) AWEUserModel user;
- (void)p_setupUI;
- (id)verifyImageView;
- (void)setVerifyImageView:;
- (id)initWithAvatarThemeType:;
- (id)initWithSizeType:;
- (id)initWithSizeType:avatarThemeType:;
- (long long)userAvatarSizeType;
- (long long)avatarThemeType;
- (void)setUserAvatarSizeType:;
- (void)setAvatarThemeType:;
- (id)user;
- (void)setUser:;
- (id)init;
- (void).cxx_destruct;
- (id)avatarImageView;
- (void)setAvatarImageView:;
@end
