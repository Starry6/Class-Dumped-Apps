@interface RPAppAudioCaptureManager : NSObject
- (id)init;
- (void)stop;
- (void).cxx_destruct;
- (BOOL)handleStartAudioQueueFailed:didFailHandler:;
- (void)startWithConfig:outputHandler:didStartHandler:;
- (void)resumeWithConfig:;
- (id)newAudioTapForAudioCaptureConfig:;
+ (id)audioStreamBasicDescriptionWithStereo:;
+ (id)audioCaptureConfigForSystemRecording:processID:contextID:;
@end
