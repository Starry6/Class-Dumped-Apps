@interface BWPreviewTimeMachineSinkNode : BWSinkNode
@property (nonatomic) {?=qiIq} earliestAllowedPTS;
@property (nonatomic) {?=ii} frameDimensions;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)handleDroppedSample:forInput:;
- (id)initWithCaptureDevice:processingQueuePriority:timeMachineCapacity:smartCameraMotionDetectionEnabled:sinkID:;
- (id)earliestAllowedPTS;
- (id)frameDimensions;
- (void)detectMotionOnStoredFramesWithSmartCameraDiagnostics:completionHandler:;
- (void)resume;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)suspendWithPTSRange:completionHandler:;
- (void)didReachEndOfDataForInput:;
- (void)setEarliestAllowedPTS:;
- (void)renderSampleBuffer:forInput:;
- (id)nodeSubType;
@end
