@interface BWStillImageDisparitySplitterNode : BWNode
@property (nonatomic) BWNodeOutput disparityOutput;
@property (nonatomic) BWNodeOutput processedOutput;
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
- (id)disparityOutput;
- (id)processedOutput;
@end
