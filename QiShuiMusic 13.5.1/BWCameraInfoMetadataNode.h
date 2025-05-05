@interface BWCameraInfoMetadataNode : BWNode
@property (nonatomic) BWNodeOutput passthruOutput;
@property (nonatomic) BWNodeOutput boxedMetadataOutput;
- (void)dealloc;
- (id)boxedMetadataOutput;
- (void)handleDroppedSample:forInput:;
- (id)nodeType;
- (void)configurationWithID:updatedFormat:didBecomeLiveForInput:;
- (void)didSelectFormat:forInput:;
- (id)initForLivePhotosMetadata:generateDebugMetadata:;
- (void)didReachEndOfDataForInput:;
- (void)renderSampleBuffer:forInput:;
- (id)passthruOutput;
- (id)nodeSubType;
@end
