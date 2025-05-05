@interface LSLiveAudioLoudness : NSObject
@property (nonatomic) @? audioLoudnessCallback;
- (id)initWithAudioConfig:channels:cacheMaxSize:enableSamiMemLeakFix:;
- (id)audioLoudnessCallback;
- (void)cacheAudioData:nbSamples:channel:;
- (void)calculateLoudnessAndPeak:;
- (void)initLSLiveLoudnessCallback:;
- (id)initWithAudioConfig:channels:cacheMaxSize:;
- (void)setAudioLoudnessCallback:;
- (void)dealloc;
- (void).cxx_destruct;
@end
