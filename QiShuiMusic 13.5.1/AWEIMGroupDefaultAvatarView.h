@interface AWEIMGroupDefaultAvatarView : UIView
@property (nonatomic) double viewWidth;
@property (nonatomic) double avatarRadius;
@property (nonatomic) double borderWidth;
@property (nonatomic) UIView leftAvatar;
@property (nonatomic) UIView rightAvatar;
- (id)initOnLightBackgroundWithFrame:;
- (void)setRightAvatar:;
- (double)avatarRadius;
- (id)leftAvatar;
- (void)p_setupUI;
- (id)rightAvatar;
- (void)setAvatarRadius:;
- (void)setLeftAvatar:;
- (void)setViewWidth:;
- (double)borderWidth;
- (void)setBorderWidth:;
- (void).cxx_destruct;
- (double)viewWidth;
@end
