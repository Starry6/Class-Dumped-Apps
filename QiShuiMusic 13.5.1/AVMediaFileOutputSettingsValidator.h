@interface AVMediaFileOutputSettingsValidator : NSObject
@property (nonatomic) AVMediaFileType fileType;
- (id)init;
- (void)dealloc;
- (BOOL)validateAudioOutputSettings:reason:;
- (id)fileType;
- (BOOL)validateVideoOutputSettings:reason:;
- (id)initWithFileType:;
+ (id)mediaFileOutputSettingsValidatorForFileType:;
@end
