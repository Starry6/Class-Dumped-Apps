@interface AWELuckySDKPopupManager : NSObject
@property (nonatomic) BOOL hasPrivacyAlertShown;
- (void)setHasPrivacyAlertShown:;
- (BOOL)canShowForNewAlertManager;
- (BOOL)__checkPrivacyAlertAlreadyShow;
- (void)__trackSlardarServiceWithEvent:category:;
- (BOOL)isActivityPopupNeededShow;
- (BOOL)hasTeenAlertDone;
- (BOOL)isActivityPopupInSpecialPage;
- (BOOL)isAppInAuditing;
- (BOOL)shouldShowBindPhoneAlert;
- (BOOL)hasPrivacyAlertShown;
+ (id)sharedManager;
@end
