@interface AVAudioOutputSettings : AVOutputSettings
@property (nonatomic) NSDictionary audioSettingsDictionary;
- (id)compatibleMediaTypes;
- (BOOL)validateUsingOutputSettingsValidator:reason:;
- (id)initWithAudioSettingsDictionary:exceptionReason:;
- (id)audioSettingsDictionary;
+ (id)audioConverterPropertiesForAudioSettingsDictionary:;
+ (id)_audioOutputSettingsWithAudioSettingsDictionary:exceptionReason:;
+ (id)audioOutputSettingsWithTrustedAudioSettingsDictionary:;
+ (id)_outputSettingsWithOutputSettingsDictionary:mediaType:exceptionReason:;
+ (id)audioOutputSettingsWithAudioSettingsDictionary:;
+ (id)registeredOutputSettingsClasses;
+ (id)defaultAudioOutputSettings;
@end
