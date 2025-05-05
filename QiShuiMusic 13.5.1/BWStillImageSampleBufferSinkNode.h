@interface BWStillImageSampleBufferSinkNode : BWSinkNode
@property (nonatomic) @? sampleBufferAvailableHandler;
- (BOOL)captureTimePhotosCurationSupported;
- (void)dealloc;
- (void)setPropagatedAttachedMediaKeys:;
- (void)setSampleBufferAvailableHandler:;
- (void)handleNodeError:forInput:;
- (id)initWithSinkID:;
- (id)sampleBufferAvailableHandler;
- (void)didReachEndOfDataForInput:;
- (void)renderSampleBuffer:forInput:;
- (void)setAnalyticsConfiguration:;
- (id)initWithInputMediaType:sinkID:;
- (BOOL)clientIsCameraOrDerivative;
- (id)propagatedAttachedMediaKeys;
- (void)setCaptureTimePhotosCurationSupported:;
- (void)setClientIsCameraOrDerivative:;
- (id)nodeSubType;
- (id)analyticsConfiguration;
@end
