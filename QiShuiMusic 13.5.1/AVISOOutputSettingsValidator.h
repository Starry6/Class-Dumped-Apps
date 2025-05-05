@interface AVISOOutputSettingsValidator : AVMediaFileOutputSettingsValidator
- (BOOL)validateAudioOutputSettings:reason:;
- (BOOL)validateVideoOutputSettings:reason:;
@end
