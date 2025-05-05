@interface BWCinematicVideoMetadataNode : BWNode
@property (nonatomic) BWNodeOutput passthruOutput;
@property (nonatomic) BWNodeOutput metadataOutput;
- (id)init;
- (void)dealloc;
- (void)handleDroppedSample:forInput:;
- (id)metadataOutput;
- (id)nodeType;
- (void)configurationWithID:updatedFormat:didBecomeLiveForInput:;
- (void)didSelectFormat:forInput:;
- (void)didReachEndOfDataForInput:;
- (void)renderSampleBuffer:forInput:;
- (id)passthruOutput;
- (id)nodeSubType;
@end
