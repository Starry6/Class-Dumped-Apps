@interface FigAudioCaptureConnectionConfiguration : FigCaptureConnectionConfiguration
@property (nonatomic) BOOL builtInMicrophoneStereoAudioCaptureEnabled;
@property (nonatomic) NSInteger builtInMicrophonePosition;
@property (nonatomic) double builtInMicrophoneRequiredSampleRate;
- (id)initWithXPCEncoding:;
- (id)copyXPCEncoding;
- (int)builtInMicrophonePosition;
- (void)setBuiltInMicrophoneStereoAudioCaptureEnabled:;
- (double)builtInMicrophoneRequiredSampleRate;
- (id)description;
- (BOOL)builtInMicrophoneStereoAudioCaptureEnabled;
- (BOOL)isEqual:;
- (void)setBuiltInMicrophoneRequiredSampleRate:;
- (void)setBuiltInMicrophonePosition:;
- (id)copyWithZone:;
@end
