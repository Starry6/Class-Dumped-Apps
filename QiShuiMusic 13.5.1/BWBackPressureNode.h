@interface BWBackPressureNode : BWNode
@property (nonatomic) NSObject<OS_dispatch_semaphore> semaphore;
@property (nonatomic) <BWNodeBackPressureSource> backPressureSourceNode;
- (id)init;
- (void)dealloc;
- (void)_handleUpdatedPresentationTimestamp:forIndex:;
- (void)handleDroppedSample:forInput:;
- (id)nodeType;
- (void)configurationWithID:updatedFormat:didBecomeLiveForInput:;
- (void)didSelectFormat:forInput:;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)didReachEndOfDataForInput:;
- (void)renderSampleBuffer:forInput:;
- (id)backPressureSourceNode;
- (id)semaphore;
- (void)setBackPressureSourceNode:;
- (void)_setSemaphore:;
- (id)nodeSubType;
- (void)setInitialSemaphoreValue:;
- (id)initWithNumberOfInputsAndOutputs:initialSemaphoreValue:;
@end
