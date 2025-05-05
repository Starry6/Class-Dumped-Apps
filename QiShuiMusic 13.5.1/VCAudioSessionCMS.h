@interface VCAudioSessionCMS : VCAudioSession
@property (nonatomic) ^{opaqueCMSession=} cmSession;
- (BOOL)hasStarted;
- (BOOL)stopSession;
- (BOOL)startInternal;
- (BOOL)setSampleRate:;
- (void)resetOverrideRoute;
- (void)setSpeakerProperty:;
- (BOOL)applyRequestedProperty:defaultValue:;
- (void)applyAudioSessionPropertiesWithVPOperatingMode:;
- (void)setupSharePlayWithVPOperatingMode:;
- (void)setBlockSize:sampleRate:force:;
- (void)setVPBlockConfigurationProperties:;
- (BOOL)applyAudioSessionMediaProperties:;
- (BOOL)startSessionWithMediaProperties:sessionRef:;
- (void)setupInputBeamforming;
- (BOOL)internalSelectMicrophoneWithType:;
- (void)applyAudioSessionMediaPropertiesForSystemAudio;
- (void)applyClientPid;
- (void)handleSecureMicNotificationWithInterruptionInfo:;
- (void)setClientName;
- (void)didBeginQuietTime;
- (void)didEndQuietTime;
- (void)handleAudioInterruption:interruptionInfo:;
- (id)cmSession;
@end
