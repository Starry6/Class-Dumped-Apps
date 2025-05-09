@interface VCAudioIO : NSObject
@property (nonatomic) r^{tagVCAudioFrameFormat={AudioStreamBasicDescription=dIIIIIIII}I} controllerFormat;
@property (nonatomic) NSDictionary reportingStats;
@property (nonatomic) r^{tagVCAudioFrameFormat={AudioStreamBasicDescription=dIIIIIIII}I} clientFormat;
@property (nonatomic) BOOL muted;
@property (nonatomic) BOOL inputMeteringEnabled;
@property (nonatomic) BOOL outputMeteringEnabled;
@property (nonatomic) BOOL isGKVoiceChat;
@property (nonatomic) C direction;
@property (nonatomic) I state;
@property (nonatomic) I pullAudioSamplesCount;
@property (nonatomic) BOOL spatialAudioDisabled;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned char)direction;
- (void)setDirection:;
- (void)dealloc;
- (void)startWithCompletionHandler:;
- (id)start;
- (void)setMuted:;
- (id)stop;
- (BOOL)isMuted;
- (unsigned int)state;
- (id)delegate;
- (void)stopWithCompletionHandler:;
- (id)initWithConfiguration:;
- (int)operatingMode;
- (void)forceCleanup;
- (BOOL)isOutputMeteringEnabled;
- (void)setOutputMeteringEnabled:;
- (BOOL)isInputMeteringEnabled;
- (void)setInputMeteringEnabled:;
- (void)didUpdateBasebandCodec:;
- (id)reportingStats;
- (void)didServerDie;
- (BOOL)isGKVoiceChat;
- (void)setIsGKVoiceChat:;
- (void)didResume;
- (id)clientFormat;
- (void)setClientFormat:;
- (void)setFarEndVersionInfo:;
- (void)didStart:error:;
- (void)didStop:error:;
- (void)controllerFormatChanged:;
- (void)didSuspend;
- (void)setupClientFormatWithConfiguration:;
- (BOOL)reconfigureWithOperatingMode:deviceRole:direction:streamInputID:streamToken:allowAudioRecording:networkClockID:;
- (id)controllerFormat;
- (void)setRemoteCodecType:sampleRate:;
- (unsigned int)pullAudioSamplesCount;
- (BOOL)spatialAudioDisabled;
- (void)setSpatialAudioDisabled:;
- (BOOL)createConverterForSource:error:;
- (void)destroyBuffers;
- (void)releaseConverters;
- (id)stopWithCompletionHandlerInternal:;
+ (id)defaultControllerForAudioType:forDirection:;
+ (id)controllerForDeviceRole:audioType:direction:streamInputID:streamToken:networkClockID:;
@end
