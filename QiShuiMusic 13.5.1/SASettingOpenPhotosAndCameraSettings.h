@interface SASettingOpenPhotosAndCameraSettings : SASettingOpenAppSettings
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
+ (id)openPhotosAndCameraSettings;
+ (id)openPhotosAndCameraSettingsWithDictionary:context:;
@end
