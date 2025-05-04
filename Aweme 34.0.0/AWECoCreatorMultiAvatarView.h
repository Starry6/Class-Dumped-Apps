@interface AWECoCreatorMultiAvatarView : UIView
@property (nonatomic) double offsetBetweenAvatar;
@property (nonatomic) double borderWidth;
@property (nonatomic) NSMutableArray avatars;
@property (nonatomic) double userAvatarWidth;
- (void)setAvatars:;
- (void)setUserAvatarWidth:;
- (id)leftAvatarView;
- (double)userAvatarWidth;
- (id)firstAvatarSize;
- (void)configWithAvatarArray:avatarWidth:maxAvatarCount:offsetBetweenAvatar:borderWidth:borderColor:;
- (void)setOffsetBetweenAvatar:;
- (void)addBorderMaskLayerForView:;
- (double)offsetBetweenAvatar;
- (void)setBorderWidth:;
- (double)borderWidth;
- (void).cxx_destruct;
- (double)totalWidth;
- (id)avatars;
@end
