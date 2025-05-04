@interface AWELongPressReminderMultiAvatarView : UIView
@property (nonatomic) NSMutableArray avatars;
@property (nonatomic) double userAvatarWidth;
- (void)configWithAvatarArray:avatarWidth:maxAvatarCount:offsetBetweenAvatar:;
- (void)setAvatars:;
- (void)setUserAvatarWidth:;
- (id)leftAvatarView;
- (double)userAvatarWidth;
- (id)firstAvatarSize;
- (void)cropIcon:offsetBetweenAvatar:;
- (void).cxx_destruct;
- (double)totalWidth;
- (id)avatars;
@end
