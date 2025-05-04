@interface AWENormalModeTabBarUIConfig : NSObject
@property (nonatomic) AWENormalModeTabBarController tabBarController;
@property (nonatomic) AWEBizTabBarLightModeFlags defaultLightModeFlags;
@property (nonatomic) AWEBizTabBarLightModeFlags customLightModeFlags;
@property (nonatomic) AWEBizTabBarLightModeFlags forceLightModeFlags;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
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
- (void)switchInNormaModeWithReloadScene:;
- (void)switchOutNormalModeWithReloadScene:;
- (void)dealloc;
- (void).cxx_destruct;
- (id)tabBarController;
- (void)setTabBarController:;
+ (id)sharedConfig;
@end
