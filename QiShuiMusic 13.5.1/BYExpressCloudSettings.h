@interface BYExpressCloudSettings : NSObject
+ (void)fetchSettingsWithCompletion:;
+ (id)createExpressSettingsWithQueue:;
+ (void)updateSettings:withCompletion:;
+ (id)privacyBundleForIdentifier:;
+ (id)_isFindMyEnabled;
+ (id)_isScreenTimeEnabled;
+ (int)_appearanceValue;
+ (id)_displayZoomOption;
@end
