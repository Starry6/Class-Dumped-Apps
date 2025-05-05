@interface AWEIMOnlinePrivacyManager : NSObject
+ (BOOL)hasShowOnlinePrivacyPopupView;
+ (BOOL)hasShowOnlinePrivacyPopupViewSecondTime;
+ (void)setHaveShownOnlinePrivacy;
+ (void)setHaveShownOnlinePrivacySecondTime;
+ (BOOL)shouldSendPrivacyNotice:showActiveStatus:isGroupChat:;
+ (BOOL)shouldShowOnlinePrivacyPopupView;
+ (BOOL)shouldShowOnlinePrivacyPopupViewSecondTime;
+ (void)showOnlinePrivacyPopupView;
+ (void)showOnlinePrivacyPopupView:;
+ (void)showOnlinePrivacyPopupViewSecondTime;
+ (void)showOnlinePrivacyPopupViewTitle:subtitle:setting:enterFrom:;
+ (void)updatePrivacyPopupViewShown;
@end
