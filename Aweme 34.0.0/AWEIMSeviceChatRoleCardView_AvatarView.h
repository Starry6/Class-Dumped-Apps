@interface AWEIMSeviceChatRoleCardView_AvatarView : UIView
@property (nonatomic) UIImageView avatarView;
@property (nonatomic) UIImageView followImageView;
@property (nonatomic) UIImageView followSuccessImageView;
@property (nonatomic) @? tapActionBlock;
@property (nonatomic) @? followActionBlock;
- (id)tapActionBlock;
- (void)setTapActionBlock:;
- (void)tapUserAvatar;
- (void)setFollowActionBlock:;
- (id)followActionBlock;
- (void)setFollowImageView:;
- (id)followImageView;
- (void)tapFollowButton;
- (void)setFollowSuccessImageView:;
- (id)followSuccessImageView;
- (id)init;
- (void)setAvatarView:;
- (id)avatarView;
- (void)setUserModel:;
- (void).cxx_destruct;
@end
