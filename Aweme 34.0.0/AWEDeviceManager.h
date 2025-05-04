@interface AWEDeviceManager : NSObject
+ (void)requestPhotoLibraryPermission:;
+ (BOOL)isCameraDenied;
+ (BOOL)isCameraAuth;
+ (BOOL)isCameraNotDetermined;
+ (BOOL)isMicroPhoneAuth;
+ (BOOL)isMicroPhoneNotDetermined;
+ (BOOL)isMicroPhoneDenied;
+ (void)getIsNotificationEnabledWithCompletionHandler:;
+ (void)requestPhotoLibraryPermission:withCert:;
+ (void)requestPhotoLibraryPermission:withCert:forLevel:;
+ (BOOL)isWearingEarPhone;
+ (unsigned long long)defaultAudioSessionCategoryOptions;
@end
