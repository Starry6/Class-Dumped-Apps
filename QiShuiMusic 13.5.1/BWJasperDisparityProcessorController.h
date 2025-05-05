@interface BWJasperDisparityProcessorController : BWStillImageProcessorController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (unsigned long long)type;
- (void)_updateStateIfNeeded;
- (id)initWithConfiguration:;
- (void)_execute;
- (int)enqueueInputForProcessing:delegate:;
- (void)cancelProcessing;
- (void)inputReadyToExecute:;
- (BOOL)finishProcessingCurrentInputNow;
- (void)addPointCloudToTimeMachine:;
- (id)jasperPointCloudForColorBuffer:;
- (void)_serviceNextRequest;
- (int)_setupJasperDisparityProcessor;
@end
