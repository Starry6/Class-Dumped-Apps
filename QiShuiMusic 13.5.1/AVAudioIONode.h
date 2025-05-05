@interface AVAudioIONode : AVAudioNode
@property (nonatomic) double presentationLatency;
@property (nonatomic) ^{OpaqueAudioComponentInstance=} audioUnit;
@property (nonatomic) BOOL voiceProcessingEnabled;
- (void)didAttachToEngine:;
- (BOOL)isInManualRenderingMode;
- (long long)manualRenderingMode;
- (id)audioUnit;
- (id)initWithIOUnit:isInput:;
- (double)presentationLatency;
- (void)didDetachFromEngine:error:;
- (BOOL)setVoiceProcessingEnabled:error:;
- (BOOL)isVoiceProcessingEnabled;
- (BOOL)enableManualRenderingMode:isInput:;
- (BOOL)enableRealtimeRenderingModeWithIOUnit:isInput:forceIOUnitReset:;
@end
