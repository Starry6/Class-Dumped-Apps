@interface TLAttentionAwarenessEffectProcessor : NSObject
@property (nonatomic) {?=Bff} effectParameters;
- (void)dealloc;
- (BOOL)start;
- (void)stop;
- (void)_assertNotRunningOnAccessQueue;
- (void).cxx_destruct;
- (void)_assertRunningOnAccessQueue;
- (id)effectParameters;
- (void)setEffectParameters:;
- (void)setEffectParameters:effectMixFadeDuration:;
- (id)initWithProcessingFormat:framesPerRender:audioSession:effectParameters:;
- (id)render:numberOfFrames:;
- (void)_applyEffectMix:;
- (float)_currentEffectMix;
- (float)_sanitizeEffectMix:;
- (void)_applyEffectParameters:includingEffectMix:;
@end
