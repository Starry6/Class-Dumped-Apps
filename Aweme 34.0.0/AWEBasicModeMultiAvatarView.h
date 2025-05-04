@interface AWEBasicModeMultiAvatarView : UIView
@property (nonatomic) NSArray avatarArray;
@property (nonatomic) double avatarWidth;
@property (nonatomic) double iconWidth;
- (void)setAvatarArray:;
- (id)avatarArray;
- (id)addIconLayer;
- (void)configWithAvatarArray:backgroundColor:needCrop:avatarWidth:needPlaceholder:needRoundRectBg:;
- (double)multiAvatarViewWidth;
- (double)iconWidth;
- (void).cxx_destruct;
- (void)setIconWidth:;
- (void)setAvatarWidth:;
- (double)avatarWidth;
@end
