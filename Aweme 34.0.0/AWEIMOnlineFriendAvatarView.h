@interface AWEIMOnlineFriendAvatarView : UIView
@property (nonatomic) UIImageView avatarView;
@property (nonatomic) UIImageView virtualAvatarView;
@property (nonatomic) AWEIMActiveUserIndicativeView dotView;
@property (nonatomic) double avatarWidth;
@property (nonatomic) double onlineInerWidth;
@property (nonatomic) double onelineOuterWidth;
@property (nonatomic) double avatarOffset;
- (void)p_setupUI;
- (void)addSubviews;
- (double)avatarOffset;
- (id)virtualAvatarView;
- (void)setVirtualAvatarView:;
- (double)onlineInerWidth;
- (void)setOnlineInerWidth:;
- (double)onelineOuterWidth;
- (void)setOnelineOuterWidth:;
- (void)setAvatarOffset:;
- (id)init;
- (void)setAvatarView:;
- (id)avatarView;
- (void).cxx_destruct;
- (id)dotView;
- (void)setDotView:;
- (void)setupSubviews;
- (void)setAvatarWidth:;
- (double)avatarWidth;
- (void)setupLayout;
@end
