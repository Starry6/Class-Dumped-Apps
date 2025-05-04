@interface AWEIMMultiAvatarsAnimationView : UIView
@property (nonatomic) NSArray avatarUrls;
@property (nonatomic) NSArray avatarViews;
@property (nonatomic) double avatarWidth;
@property (nonatomic) q avatarCount;
@property (nonatomic) Q style;
- (long long)avatarCount;
- (void)setAvatarCount:;
- (void)configWithAvatarArray:avatarWidth:;
- (id)avatarUrls;
- (void)setAvatarUrls:;
- (void)configWithAvatarArray:avatarWidth:avatarCount:;
- (id)__frameWithIndex:;
- (void)__updateAvatarStyle;
- (void)__updateAvatarViewsWithAnimation:;
- (long long)__indexOfURI:inUrls:;
- (void)insertAvatar:atIndex:animation:;
- (void)removeAvatarAtIndex:animation:;
- (void)exchangeAvatarWithIndex1:index2:animation:;
- (id)visiableRange;
- (unsigned long long)style;
- (void).cxx_destruct;
- (void)setStyle:;
- (void)setAvatarViews:;
- (id)avatarViews;
- (void)setAvatarWidth:;
- (double)avatarWidth;
@end
