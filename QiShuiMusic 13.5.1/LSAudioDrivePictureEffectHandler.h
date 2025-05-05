@interface LSAudioDrivePictureEffectHandler : NSObject
@property (nonatomic) {LSAudioDrivePictureEffectParamsStruct=BBBBB@@} params;
@property (nonatomic) ^v effectAudioHandle;
@property (nonatomic) LSAudioDrivePictureEffectPreviewAudioCapture previewAudioCapture;
@property (nonatomic) NSInteger sampleRate;
- (void)applicationDidBecomeActiveNoti:;
- (id)effectAudioHandle;
- (id)previewAudioCapture;
- (void)processIoData:musicData:processedData:earMonitorData:bufferSize:numberOfChannels:sampleRate:numberOfFrames:;
- (void)setEffectAudioHandle:;
- (void)setPreviewAudioCapture:;
- (void)startAudioCaptureIfNeeded;
- (void)stopAudioCaptureIfNeeded;
- (id)init;
- (void)dealloc;
- (int)sampleRate;
- (void).cxx_destruct;
- (id)params;
- (id).cxx_construct;
- (void)setSampleRate:;
- (void)setParams:;
- (int)destroyHandler;
+ (id)createHandlerWithParams:err:;
@end
