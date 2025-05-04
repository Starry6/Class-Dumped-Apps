@interface AWETabbarGeneralAvatarBreatheViewModel : NSObject
@property (nonatomic) AWEHPBottomTabUIConfigModel config;
@property (nonatomic) AWEHPChannelAvatarBreathModel avatarBreathModel;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) AWETabBarGeneralAvatarBreathView avatarBreathView;
@property (nonatomic) AWETabBarGeneralAvatarBreathView oldAvatarBreathView;
- (id)avatarBreathView;
- (void)showWithAvatarBreathModel:;
- (void)hideAvatarView;
- (void)destroyAvatarView;
- (id)oldAvatarBreathView;
- (void)setOldAvatarBreathView:;
- (void)setAvatarBreathView:;
- (id)avatarBreathModel;
- (void)setAvatarBreathModel:;
- (void)setConfig:;
- (BOOL)isShowing;
- (id)initWithConfig:;
- (id)config;
- (void).cxx_destruct;
- (void)setIsShowing:;
@end
