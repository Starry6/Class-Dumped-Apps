@interface AWEPlayInteractionTagMultiAvatarView : UIView
@property (nonatomic) NSMutableArray avatars;
@property (nonatomic) double userAvatarWidth;
- (void)configWithAvatarArray:avatarWidth:maxAvatarCount:offsetBetweenAvatar:;
- (void)setAvatars:;
- (void)setUserAvatarWidth:;
- (id)clipAvatarFromCenter:;
- (id)leftAvatarView;
- (double)userAvatarWidth;
- (id)firstAvatarSize;
- (void).cxx_destruct;
- (double)totalWidth;
- (id)avatars;
@end
