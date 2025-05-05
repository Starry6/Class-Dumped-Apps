@interface IESMMAudioDetection : VEAudioFilter
@property (nonatomic) IESMMAudioDetectionConfig config;
@property (nonatomic) float loudness;
@property (nonatomic) float peak;
- (id)initWithSampleRate:channels:config:;
- (int)process:samples:channels:;
- (void)dealloc;
- (void)setConfig:;
- (void).cxx_destruct;
- (void)reset;
- (id)config;
- (id).cxx_construct;
- (float)loudness;
- (float)peak;
@end
