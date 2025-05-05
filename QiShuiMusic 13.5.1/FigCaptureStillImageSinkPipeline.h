@interface FigCaptureStillImageSinkPipeline : FigCaptureSinkPipeline
@property (nonatomic) NSArray nodes;
@property (nonatomic) NSString sinkID;
@property (nonatomic) BWStillImageCoordinatorNode stillImageCoordinatorNode;
@property (nonatomic) BWCompressedShotBufferNode compressedShotBufferNode;
@property (nonatomic) BWStillImageSampleBufferSinkNode stillImageSinkNode;
@property (nonatomic) BWPortraitHDRStagingNode portraitHDRStagingNode;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (id)compressedShotBufferNode;
- (id)stillImageSinkNode;
- (void)enablePrepareTimeAllocationsForDeferredPrepare;
- (id)initWithConfiguration:captureDevice:sourceOutputsByPortType:captureStatusDelegate:inferenceScheduler:graph:name:;
- (id)portraitHDRStagingNode;
- (id)stillImageCoordinatorNode;
@end
