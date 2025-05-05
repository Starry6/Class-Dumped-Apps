@interface FigCaptureVideoThumbnailSinkPipeline : FigCaptureSinkPipeline
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)imageQueueSinkNodeDidDisplayFirstFrame:atHostTime:;
- (void)imageQueueSinkNode:didAttemptToEnqueuePreviewSampleBuffer:withSuccess:;
- (void)imageQueueSinkNodeDidDisplayFirstFrame:;
- (void)setDiscardsSampleData:;
@end
