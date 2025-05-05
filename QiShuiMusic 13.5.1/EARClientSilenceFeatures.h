@interface EARClientSilenceFeatures : NSObject
@property (nonatomic) double silenceFramesCountMs;
@property (nonatomic) double silenceProbability;
@property (nonatomic) double silenceDurationMs;
@property (nonatomic) double silencePosterior;
@property (nonatomic) double processedAudioMs;
- (void)setSilencePosterior:;
- (double)silencePosterior;
- (double)silenceProbability;
- (void)setSilenceProbability:;
- (id)initWithSilenceFramesCountMs:silenceProbability:silenceDurationMs:silencePosterior:processedAudioMs:;
- (double)silenceFramesCountMs;
- (void)setSilenceFramesCountMs:;
- (double)silenceDurationMs;
- (void)setSilenceDurationMs:;
- (double)processedAudioMs;
- (void)setProcessedAudioMs:;
@end
