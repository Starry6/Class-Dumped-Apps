@interface AWEIMMultiAvatarView : UIView
@property (nonatomic) NSArray avatarArray;
@property (nonatomic) double avatarWidth;
@property (nonatomic) double iconWidth;
- (void)setAvatarArray:;
- (id)avatarArray;
- (id)addIconLayer;
- (void)configWithAvatarArray:backgroundColor:needCrop:avatarWidth:needPlaceholder:needRoundRectBg:;
- (double)multiAvatarViewWidth;
- (void)configWithContext:;
- (void)configWithAvatarArray:backgroundColor:needCrop:avatarWidth:needPlaceholder:;
- (void)configWithAvatarArray:backgroundColor:needCrop:avatarWidth:needPlaceholder:needRoundRectBg:maxAvatarCount:avatarBorderColor:;
- (int)showedAvatarCount;
- (void)__planetAroundStyleUIWithContext:;
- (id)avatarArray:maxAvatarCount:;
- (double)iconWidth;
- (void).cxx_destruct;
- (void)setIconWidth:;
- (void)setAvatarWidth:;
- (double)avatarWidth;
@end
