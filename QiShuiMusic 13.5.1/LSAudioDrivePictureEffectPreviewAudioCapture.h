@interface LSAudioDrivePictureEffectPreviewAudioCapture : NSObject
@property (nonatomic) LiveStreamAudioCapture audioCapture;
@property (nonatomic) LSAudioDrivePictureEffectHandler audioDrivePictureEffectHandler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)admCreatedSuccess:;
- (id)audioCapture;
- (id)audioDrivePictureEffectHandler;
- (void)callbackAudioLog:;
- (void)onAudioCaptureEvent:;
- (void)pullMicAudio:size:sampleRate:timeStamp:mNumberChannels:numberOfFrames:processedData:earMonitorData:;
- (void)pushPlayerAECAudioData:frames:bytesPerSample:channels:sampleRate:;
- (void)pushPlayerAudioData:frames:bytesPerSample:channels:sampleRate:;
- (void)setAudioCapture:;
- (void)setAudioDrivePictureEffectHandler:;
- (id)initWithConfig:;
- (void)startAudioCapture;
- (void)stopAudioCapture;
- (void).cxx_destruct;
@end
