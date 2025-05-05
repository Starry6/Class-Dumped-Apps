@interface BWVideoPointCloudSynchronizerNode : BWNode
@property (nonatomic) BWNodeInput imageInput;
@property (nonatomic) BWNodeInput pointCloudInput;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didSelectFormat:forInput:forAttachedMediaKey:;
- (void)dealloc;
- (void)handleDroppedSample:forInput:;
- (void)configurationWithID:updatedFormat:didBecomeLiveForInput:;
- (void)didReachEndOfDataForInput:;
- (void)renderSampleBuffer:forInput:;
- (void)didChangeDepthMaxFrameRate:;
- (id)initWithCaptureDevice:;
- (void)_tryToEmitBuffersWithRGBBuffer:;
- (BOOL)_attachPointCloudDataToSampleBuffer:;
- (void)_setUpPointCloudMediaConfigurationForOutput:inputAttachedMediaKey:outputAttachedMediaKey:;
- (BOOL)_shouldEmitBuffer;
- (void)_updateNumberOfReceivedRGBFramesBeforeEmittingDepthFrameWithDepthMaxFrameRate:rgbMaxFrameRate:;
- (id)imageInput;
- (id)pointCloudInput;
@end
