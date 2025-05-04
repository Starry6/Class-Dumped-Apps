@interface AWEIMVoipNoticeIconView : UIView
@property (nonatomic) UIStackView userAvatarsStackView;
@property (nonatomic) double userAvatarsViewHeight;
@property (nonatomic) double userAvatarsViewWidth;
@property (nonatomic) <AWEIMUserManagerProtocol> userManager;
- (void)awe_themeReload;
- (id)userManager;
- (void)setUserManager:;
- (void)renderModel:;
- (double)userAvatarsViewWidth;
- (double)userAvatarsViewHeight;
- (void)setUserAvatarsStackView:;
- (id)userAvatarsStackView;
- (void)__refreshAvatarStackViewWithUserIMIDs:;
- (long long)__maxShowAvatarCount;
- (id)__createUserAvatarImageView;
- (id)__avatarBoarderColor;
- (BOOL)__isLightTheme;
- (void)setUserAvatarsViewHeight:;
- (void)__refreshAvataImageView:withUserIMID:;
- (void)setUserAvatarsViewWidth:;
- (id)init;
- (void).cxx_destruct;
@end
