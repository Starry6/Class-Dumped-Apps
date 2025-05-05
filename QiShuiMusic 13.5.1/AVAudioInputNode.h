@interface AVAudioInputNode : AVAudioIONode
@property (nonatomic) BOOL voiceProcessingBypassed;
@property (nonatomic) BOOL voiceProcessingAGCEnabled;
@property (nonatomic) BOOL voiceProcessingInputMuted;
@property (nonatomic) float volume;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setRate:;
- (float)rate;
- (void)setVoiceProcessingBypassed:;
- (void)setVoiceProcessingInputMuted:;
- (BOOL)isVoiceProcessingBypassed;
- (BOOL)setManualRenderingInputPCMFormat:inputBlock:;
- (BOOL)isVoiceProcessingAGCEnabled;
- (BOOL)isVoiceProcessingInputMuted;
- (void)setVoiceProcessingAGCEnabled:;
@end
