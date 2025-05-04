@interface AWESearchAuthorityChecker : NSObject
+ (void)checkAuthorityFromAlbumWithCompletion:requestIfNeed:;
+ (void)checkAuthorityFromCameraWithCompletion:requestIfNeed:;
+ (void)showAlbumAuthorityAlert;
+ (void)openSystemSetting;
+ (void)checkAuthorityFromAlbumWithSuccessCompletion:;
+ (void)checkAuthorityFromCameraWithSuccessCompletion:;
+ (void)showCameraAuthorityView;
+ (void)impCheckAuthorityFromAlbumWithCompletion:requestIfNeed:;
+ (void)impCheckAuthorityFromCameraWithCompletion:requestIfNeed:;
+ (BOOL)authorityCheckerUesBDPrivacyCertEntry;
+ (void)privacyCertEntryCheckAlbumWithCompletion:requestIfNeed:;
+ (void)deviceManagerCheckAlbumWithCompletion:requestIfNeed:;
+ (void)privacyCertEntryCheckCameraWithCompletion:requestIfNeed:;
+ (void)deviceManagerCheckCameraWithCompletion:requestIfNeed:;
@end
