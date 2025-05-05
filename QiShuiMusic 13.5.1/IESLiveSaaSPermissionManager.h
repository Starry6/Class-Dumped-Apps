@interface IESLiveSaaSPermissionManager : NSObject
+ (void)checkForCameraPermissionWithCameraPrivacyCert:withCompleteBlock:;
+ (void)checkForPhotoLibraryPermissionWithPhotoPrivacyCert:withCompleteBlock:;
+ (void)showGoToSettingsPageAlertWithContent:withPrivacyCer:;
@end
