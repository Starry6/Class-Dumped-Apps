@interface DAAccountUpgrader : NSObject
+ (void)_moveExchangeCredentialsToAppleAccessGroup;
+ (void)_updateFacebookAccountAuthenticationTypes;
+ (void)_writeDeviceSpecificID;
+ (void)_upgradeDAAccounts;
+ (void)_notifyDaHolidaySubCalAccount;
+ (void)upgradeAccounts:;
@end
