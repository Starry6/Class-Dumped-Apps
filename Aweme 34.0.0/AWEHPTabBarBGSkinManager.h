@interface AWEHPTabBarBGSkinManager : NSObject
@property (nonatomic) NSDictionary hambConfigDict;
@property (nonatomic) AWEHPTabBarBGSkinHambConfig configWrapper;
@property (nonatomic) double didEnterBackgroundTimestamp;
- (void)teenModeDidChange:isLogout:;
- (void)addNotification;
- (void)removeNotification;
- (id)basicModeConfig;
- (BOOL)bottomChannelCanShowTabBarBGSkinWithChannelID:currentModeType:;
- (BOOL)topChannelCanShowTabBarBGSkinWithChannelID:;
- (BOOL)updateConfigByHambHotReload:;
- (id)configWrapper;
- (id)normalModeConfig;
- (BOOL)p_topChannelCanShowTabBarBGSkinWithChannelID:;
- (BOOL)p_bottomChannelCanShowTabBarBGSkinWithChannelID:;
- (id)teenModeConfig;
- (void)setDidEnterBackgroundTimestamp:;
- (double)didEnterBackgroundTimestamp;
- (BOOL)deleteConfigValidTimeExpiredWithConfig:currentMode:;
- (void)hotReloadTabBarSkin;
- (id)hambConfigDict;
- (BOOL)isHotReloadEnableWithHambConfig:;
- (void)basicModeDidChange:;
- (void)setHambConfigDict:;
- (void)setConfigWrapper:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)appDidEnterBackground;
- (void)appWillEnterForeground;
+ (id)sharedInstance;
@end
