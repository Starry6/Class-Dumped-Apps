@interface TLAttentionAwarenessEffectCoordinator : NSObject
@property (nonatomic) AVAudioSession audioSession;
@property (nonatomic) {?=Bff} effectParameters;
- (void)dealloc;
- (void).cxx_destruct;
- (id)audioSession;
- (id)effectParameters;
- (void)setEffectParameters:;
- (id)initWithEffectParameters:audioSession:;
- (id)audioMixForAsset:;
- (void)setEffectParameters:effectMixFadeDuration:;
- (void)_prepareAudioProcessingWithEffectAudioTapContext:maximumNumberOfFrames:processingFormat:;
- (void)_unprepareAudioProcessingWithEffectAudioTapContext:;
- (void)_finalizeAudioProcessingWithEffectAudioTapContext:;
- (void)_processAudioWithEffectAudioTapContext:bufferList:numberOfFramesRequested:numberOfFramesToProcess:;
@end
