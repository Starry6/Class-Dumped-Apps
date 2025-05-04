@interface AWEBizTabBarNewMultiTabMallItemConfig : AWEBizTabBarMultiTabMallItemConfig
- (void)tabBarDidSelectItemFromPreviousSelectedType:isByTap:;
- (BOOL)canLandingWithTabId:params:;
- (BOOL)loginIfNeededAtTabBarItemSelection:;
- (id)loginInfoAtTabBarItemSelectionFromPreviousSelectedType:;
- (BOOL)shouldHandleTabBarItemSelectionFromPreviousSelectedType:isByTap:;
- (void)configWithRouterParamsForAiPrefetch:;
- (void)requestMallBottomClientAiPrefetchApis:message:completion:;
@end
