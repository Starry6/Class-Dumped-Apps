@interface IESECTabKitTabUtil : NSObject
+ (void)reloadTabBarStyle:withBFFStyle:;
+ (id)adaptiveSizeForOriginSize:targetSize:;
+ (id)badgeCacheIdentifier:;
+ (BOOL)badgeMarkedRead:;
+ (id)badgeNumberAttributedString:;
+ (id)badgeTextAttributedString:;
+ (void)changeComponent:visibility:animated:;
+ (void)changeComponentView:visibility:animated:;
+ (unsigned long long)checkHybridContainerForTabType:originHybridContainer:;
+ (id)componentView:;
+ (BOOL)configComponent:withDisplayMode:;
+ (id)configParamsWithKeys:rawData:;
+ (void)createTabInfosWithImagePlaceHolder:styleConfigs:completion:;
+ (void)createTabInfosWithMode:imagePlaceHolder:styleConfigs:completion:;
+ (void)markBadgeRead:;
+ (id)parseRawData:modelClass:error:;
+ (void)reloadTabBarStyle:withConfig:;
+ (id)reloadTabBarStyle:withScreenState:multiStateConfig:;
+ (id)splitStyleWithTabConfig:globalConfig:;
+ (id)tabBarStyleForScreenState:multiStateConfig:;
+ (id)tabBarStyleForScreenState:tabMultiStateConfig:globalMultiStateConfig:;
+ (id)tabBarStyleForTabStyleConfig:globalStyleConfig:;
+ (id)tabStyleConfigForHighPriorStyle:lowPriorStyle:;
+ (id)tabStyleConfigForScreenState:fullStateStyle:splitStateStyle:;
+ (long long)tabbarHLayoutAlignment:;
+ (void)updateTabBar:withIndicatorStyle:;
@end
