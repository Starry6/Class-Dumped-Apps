@interface IESIMDeviceManager : NSObject
+ (unsigned long long)defaultAudioSessionCategoryOptions;
+ (void)getIsNotificationEnabledWithCompletionHandler:;
+ (BOOL)isCameraAuth;
+ (BOOL)isCameraDenied;
+ (BOOL)isCameraNotDetermined;
+ (BOOL)isMicroPhoneAuth;
+ (BOOL)isMicroPhoneDenied;
+ (BOOL)isMicroPhoneNotDetermined;
+ (BOOL)isWearingEarPhone;
+ (void)requestPhotoLibraryPermission:;
+ (BOOL)isNotificationEnabled;
@end
