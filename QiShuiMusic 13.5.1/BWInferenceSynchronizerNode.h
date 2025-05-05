@interface BWInferenceSynchronizerNode : BWNode
@property (nonatomic) S errorHandlingModel;
@property (nonatomic) BWNodeInput inputProvidingOutputSampleBuffer;
@property (nonatomic) BWNodeInput inputProvidingOnlyInferences;
@property (nonatomic) BWNodeInput inputProvidingPreferredInferences;
@property (nonatomic) BOOL synchronizesTopLevelAttachments;
- (id)init;
- (void)didSelectFormat:forInput:forAttachedMediaKey:;
- (void)dealloc;
- (void)handleDroppedSample:forInput:;
- (id)nodeType;
- (void)configurationWithID:updatedFormat:didBecomeLiveForInput:;
- (void)handleNodeError:forInput:;
- (void)didReachEndOfDataForInput:;
- (void)handleStillImageReferenceFrameBracketedCaptureSequenceNumber:forInput:;
- (void)renderSampleBuffer:forInput:;
- (id)nodeSubType;
- (id)initWithIndexOfInputProvidingOutputSampleBuffer:indexOfInputProvidingPreferredInferences:errorHandlingModel:;
- (id)inputProvidingOutputSampleBuffer;
- (id)inputProvidingPreferredInferences;
- (id)inputProvidingOnlyInferences;
- (unsigned short)errorHandlingModel;
- (BOOL)synchronizesTopLevelAttachments;
- (void)setSynchronizesTopLevelAttachments:;
@end
