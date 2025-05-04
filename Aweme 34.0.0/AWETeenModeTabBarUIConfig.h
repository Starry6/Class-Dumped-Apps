@interface AWETeenModeTabBarUIConfig : NSObject
@property (nonatomic) AWETeenModeTabBarController tabBarController;
@property (nonatomic) AWEBizTabBarLightModeFlags defaultLightModeFlags;
@property (nonatomic) AWEBizTabBarLightModeFlags customLightModeFlags;
@property (nonatomic) AWEBizTabBarLightModeFlags forceLightModeFlags;
- (void)reloadTabBarWithTabItemType:reloadScene:;
- (void)reloadTabBarItemsOnly:;
- (id)forceLightModeFlags;
- (id)defaultLightModeFlags;
- (id)customLightModeFlags;
- (void)didThemeChanged;
- (void)updateTabBarAppearance;
- (id)p_generateButtonTypeListWithButtonList:;
- (void)resetTabBarStatus;
- (void)setDefaultLightModeFlags:;
- (void)setCustomLightModeFlags:;
- (void)setForceLightModeFlags:;
- (void)switchOutTeenMode;
- (void)switchInTeenMode;
- (void)dealloc;
- (void).cxx_destruct;
- (id)tabBarController;
- (void)setTabBarController:;
+ (id)sharedConfig;
@end
