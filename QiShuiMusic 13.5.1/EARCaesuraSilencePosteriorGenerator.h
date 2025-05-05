@interface EARCaesuraSilencePosteriorGenerator : NSObject
@property (nonatomic) <EARCaesuraSilencePosteriorGeneratorDelegate> delegate;
- (void)dealloc;
- (void)setDelegate:;
- (void)endAudio;
- (id)delegate;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)resetForNewRequest;
- (void)_startComputeTask;
- (id)initWithConfigFile:;
- (id)initWithConfigFile:samplingRate:;
- (id)initWithConfigFile:samplingRate:queue:;
- (void)addAudio:numSamples:;
- (long long)getFrameDurationMs;
@end
