@interface AWEIMDoubleAvatarPresenterProps : AWEIMUIViewPresenterProps
@property (nonatomic) Q type;
@property (nonatomic) AWEIMAvatarProps leftAvatarProps;
@property (nonatomic) AWEIMAvatarProps rightAvatarProps;
@property (nonatomic) UIColor avatarBorderColor;
@property (nonatomic) double avatarBorderWidth;
@property (nonatomic) double avatarWidthHeight;
@property (nonatomic) double centerOffset;
- (id)avatarBorderColor;
- (double)avatarWidthHeight;
- (void)setAvatarBorderWidth:;
- (void)setAvatarBorderColor:;
- (double)avatarBorderWidth;
- (void)setLeftAvatarProps:;
- (void)setRightAvatarProps:;
- (id)leftAvatarProps;
- (id)rightAvatarProps;
- (void)setAvatarWidthHeight:;
- (void)setCenterOffset:;
- (double)centerOffset;
- (unsigned long long)type;
- (void)setType:;
- (void).cxx_destruct;
@end
