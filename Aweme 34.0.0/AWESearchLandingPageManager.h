@interface AWESearchLandingPageManager : NSObject
+ (BOOL)isLynxURL:;
+ (BOOL)isWebURL:;
+ (id)searchLandingPageRuleWhitelist;
+ (BOOL)isHitLynxOnlineWithUrl:settingsArray:;
+ (BOOL)isHitLynxLibraWithUrl:settingsConfig:;
+ (BOOL)isHitH5OnlineWithUrl:settingsArray:;
+ (BOOL)isHitH5LibraWithUrl:settingsConfig:;
+ (BOOL)isHitH5WhitlistWithUrl:settingsArray:;
+ (BOOL)isHitLynxWhitlistWithUrl:settingsArray:;
+ (long long)getSearchLandingPageNavigationBarStyleWithUrl:;
@end
