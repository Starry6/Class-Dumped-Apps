@interface AVOutputSettingsAssistant : NSObject
@property (nonatomic) NSDictionary audioSettings;
@property (nonatomic) NSDictionary videoSettings;
@property (nonatomic) NSString outputFileType;
- (id)init;
- (void)dealloc;
- (id)outputFileType;
- (id)initWithPreset:;
- (id)audioSettings;
- (id)videoSettings;
- (id)videoEncoderSpecification;
- (id)sourceVideoFormat;
- (id)sourceAudioFormat;
- (id)sourceVideoAverageFrameDuration;
- (id)sourceVideoMinFrameDuration;
- (void)setSourceAudioFormat:;
- (void)setSourceVideoFormat:;
- (void)setSourceVideoAverageFrameDuration:;
- (void)setSourceVideoMinFrameDuration:;
- (void)setVideoEncoderSpecification:;
+ (id)_allOutputSettingsPresets;
+ (id)availableOutputSettingsPresets;
+ (id)outputSettingsAssistantWithPreset:;
+ (id)baseSettingsProviderForPreset:;
+ (id)videoSettingsAdjusterForPreset:;
+ (id)videoEncoderCapabilities;
+ (BOOL)validatesSourceVideoMinFrameDuration;
@end
