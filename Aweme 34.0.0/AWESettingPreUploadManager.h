@interface AWESettingPreUploadManager : NSObject
+ (void)fetchSettingsWithContext:;
+ (long long)isPreUploadSettingEnabled;
+ (void)updateSettingPreUploadStatus:completion:;
+ (void)saveWithEnablePreUpload:;
@end
