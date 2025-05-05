@interface AVAVAudioSettingsAudioOutputSettings : AVAudioOutputSettings
- (id)audioOptions;
- (id)initWithAVAudioSettingsDictionary:exceptionReason:;
- (BOOL)encoderIsAvailableOnCurrentSystemReturningError:;
- (BOOL)willYieldCompressedSamples;
- (id)initWithTrustedAVAudioSettingsDictionary:;
- (void)getAudioStreamBasicDescription:forAudioFileTypeID:sourceFormatDescription:;
- (BOOL)canFullySpecifyOutputFormatReturningReason:;
- (id)copyAudioChannelLayoutForSourceFormatDescription:audioChannelLayoutSize:;
+ (id)_audioOutputSettingsWithAudioSettingsDictionary:exceptionReason:;
+ (id)eligibleOutputSettingsDictionaryKeys;
@end
