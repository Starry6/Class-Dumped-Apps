@interface AVSpeechSynthesizer : NSObject
@property (nonatomic) <AVSpeechSynthesizerDelegate> delegate;
@property (nonatomic) BOOL speaking;
@property (nonatomic) BOOL paused;
@property (nonatomic) NSArray outputChannels;
@property (nonatomic) BOOL usesApplicationAudioSession;
@property (nonatomic) BOOL mixToTelephonyUplink;
- (void)setDelegate:;
- (BOOL)isPaused;
- (id)delegate;
- (void).cxx_destruct;
- (BOOL)isSpeaking;
- (BOOL)stopSpeakingAtBoundary:;
- (BOOL)pauseSpeakingAtBoundary:;
- (void)setUsesApplicationAudioSession:;
- (void)speakUtterance:;
- (BOOL)continueSpeaking;
- (void)writeUtterance:toBufferCallback:;
- (void)writeUtterance:toBufferCallback:toMarkerCallback:;
- (id)outputChannels;
- (void)setOutputChannels:;
- (BOOL)usesApplicationAudioSession;
- (BOOL)mixToTelephonyUplink;
- (void)setMixToTelephonyUplink:;
@end
