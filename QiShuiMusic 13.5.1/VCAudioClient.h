@interface VCAudioClient : NSObject
@property (nonatomic) AVAudioDevice inputDevice;
@property (nonatomic) AVAudioDevice outputDevice;
@property (nonatomic) NSInteger processId;
@property (nonatomic) BOOL isMuted;
@property (nonatomic) VCAudioIO audioIO;
@property (nonatomic) BOOL isMutedTalkerNotificationRegistered;
@property (nonatomic) BOOL mixingVoiceWithMediaEnabled;
@property (nonatomic) BOOL followSystemInput;
@property (nonatomic) BOOL followSystemOutput;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)startWithError:;
- (id)outputDevice;
- (void)dealloc;
- (int)processId;
- (BOOL)isMuted;
- (void)unlock;
- (void)lock;
- (void)setMixingVoiceWithMediaEnabled:;
- (void)setAudioSessionProperties:;
- (BOOL)stopWithError:;
- (void)setOutputDevice:;
- (void)didServerDie;
- (BOOL)isMixingVoiceWithMediaEnabled;
- (void)didSuspendAudioIO:;
- (void)didResumeAudioIO:;
- (id)audioIO;
- (void)setAudioIO:;
- (void)cleanupSpatialAudio;
- (id)initWithProcessId:;
- (BOOL)muteWithError:;
- (BOOL)unmuteWithError:;
- (void)setFollowSystemInput:;
- (void)setFollowSystemOutput:;
- (BOOL)resetAudioSessionOutputPortOverride:;
- (BOOL)startAudioSessionWithError:;
- (BOOL)stopAudioSessionWithError:;
- (void)setupSpatialAudio;
- (BOOL)setupAudioIO;
- (void)cleanupAudioIO;
- (void)startAudioIOWithCompletionHandler:;
- (void)stopAudioIOWithCompletionHandler:;
- (id)getCurrentAudioDeviceWithType:;
- (BOOL)setCurrentAudioDevice:type:;
- (id)inputDevice;
- (void)setInputDevice:;
- (BOOL)isMutedTalkerNotificationRegistered;
- (void)setIsMutedTalkerNotificationRegistered:;
- (BOOL)isFollowSystemInputEnabled;
- (BOOL)isFollowSystemOutputEnabled;
@end
