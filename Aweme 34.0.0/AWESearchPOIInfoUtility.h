@interface AWESearchPOIInfoUtility : NSObject
+ (id)locationAuthPopupBlacklist;
+ (void)showPOIAuthorizationPopupIfNeeded:from:extraLogParams:withHandler:;
+ (void)showPOIAuthPopupOnceInLifetimeWithFrom:extraLogParams:withHandler:;
+ (void)showPOIAuthPopupWithFrequencyLimitEnable:from:extraLogParams:withHandler:;
+ (void)requestLocateWithHandler:;
+ (void)showPOIAuthGuideBottomBarAddOnView:from:extraLogParams:completion:;
+ (void)jumpToSettingPOIAuth;
+ (BOOL)hasLocationAuthPermission;
+ (void)requestLocationInfoIfNeedInMiddlePageWithKeyword:previousPage:refer:;
+ (id)authBarTitle;
+ (id)authBarActionText;
+ (id)authRequestCert;
+ (void)showPOIAuthorizationPopupIfNeeded:from:cert:extraLogParams:withHandler:;
+ (BOOL)p_hasPOIAuthorizaiton;
+ (id)p_searchLocationServiceConfig;
+ (id)aiSearchLocationRequestCert;
+ (id)locateRequestCert;
+ (id)poiAuthJumpToSettingCert;
+ (id)middlePageLocateRequestCert;
+ (BOOL)isInAllowListForLocationWithPreviousPage:refer:;
+ (id)authBarConfig;
+ (id)searchPOIAuthSettingsConfig;
+ (unsigned long long)searchDialogStyle;
+ (unsigned long long)searchPicStyle;
@end
