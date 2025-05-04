@interface AWEIMDoubleUserAvatarView : UIView
@property (nonatomic) UIImageView leftAvatar;
@property (nonatomic) UIImageView rightAvatar;
@property (nonatomic) CALayer leftLayer;
@property (nonatomic) CALayer rightLayer;
@property (nonatomic) double avatarBorderWidth;
- (id)leftLayer;
- (id)rightLayer;
- (void)setLeftLayer:;
- (void)setRightLayer:;
- (void)setAvatarBorderWidth:;
- (double)avatarBorderWidth;
- (id)leftAvatar;
- (id)rightAvatar;
- (void)setLeftAvatar:;
- (void)setRightAvatar:;
- (id)initWithProps:;
- (void)p_setupUIWithProps:;
- (void)systemFontSizeChanged:;
- (void)dealloc;
- (void).cxx_destruct;
@end
