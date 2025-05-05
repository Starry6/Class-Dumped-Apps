@interface BWNodeSampleBufferMessage : BWNodeMessage
@property (nonatomic) ^{opaqueCMSampleBuffer=} sampleBuffer;
@property (nonatomic) FigCaptureStillImageSettings stillImageSettings;
@property (nonatomic) FigCaptureRecordingSettings recordingSettings;
- (void)dealloc;
- (id)sampleBuffer;
- (id)stillImageSettings;
- (id)recordingSettings;
+ (id)newMessageWithSampleBuffer:stillImageSettings:;
+ (id)newMessageWithSampleBuffer:;
+ (id)newMessageWithSampleBuffer:recordingSettings:;
@end
