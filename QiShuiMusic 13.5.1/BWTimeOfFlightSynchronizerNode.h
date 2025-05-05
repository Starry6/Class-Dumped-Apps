@interface BWTimeOfFlightSynchronizerNode : BWNode
@property (nonatomic) BWNodeInput videoInput;
@property (nonatomic) BWNodeInput pointCloudInput;
- (id)init;
- (void)didSelectFormat:forInput:forAttachedMediaKey:;
- (void)dealloc;
- (void)handleDroppedSample:forInput:;
- (id)nodeType;
- (void)configurationWithID:updatedFormat:didBecomeLiveForInput:;
- (void)handleNodeError:forInput:;
- (void)didReachEndOfDataForInput:;
- (void)renderSampleBuffer:forInput:;
- (id)nodeSubType;
- (id)pointCloudInput;
- (id)videoInput;
@end
