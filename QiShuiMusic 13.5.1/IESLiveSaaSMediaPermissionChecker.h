@interface IESLiveSaaSMediaPermissionChecker : NSObject
+ (void)checkAudioPermissionWithMicCert:completion:;
+ (void)checkAudioPermissionWithMicCert:context:completion:;
+ (void)checkVideoPermissionWithMicCert:cameraCert:completion:;
+ (void)showNoMediaPermissionAlert:settingUrl:;
@end
