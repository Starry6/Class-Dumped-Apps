@interface IESLiveAnchorMultiLinkNotificationPlayerAvatarView : UIView
@property (nonatomic) UIImageView avatarImageView;
@property (nonatomic) CAShapeLayer staticAvatarBorderLayer;
@property (nonatomic) CAShapeLayer animatedAvatarBorderLayer;
@property (nonatomic) double avatarSideLen;
- (id)animatedAvatarBorderLayer;
- (double)avatarSideLen;
- (id)initWithAvatarSizeLen:imageURLs:needBeating:;
- (id)makeAvatarBorderLayer;
- (void)p_startBeating;
- (void)setAnimatedAvatarBorderLayer:;
- (void)setAvatarSideLen:;
- (void)setStaticAvatarBorderLayer:;
- (id)staticAvatarBorderLayer;
- (void)updateAvatarWithImageURLs:;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)avatarImageView;
- (void)setAvatarImageView:;
@end
