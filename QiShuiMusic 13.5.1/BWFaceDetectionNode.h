@interface BWFaceDetectionNode : BWFanOutNode
@property (nonatomic) BWNodeOutput metadataObjectOutput;
@property (nonatomic) NSArray boxedMetadataOutputs;
- (id)boxedMetadataOutputs;
- (void)dealloc;
- (id)rectOfInterest;
- (void)setRectOfInterest:;
- (id)nodeType;
- (void)configurationWithID:updatedFormat:didBecomeLiveForInput:;
- (id)initWithObjectMetadataIdentifiers:movieFileOutputMetadataIdentifierGroups:;
- (void)setMetadataObjectOutputEnabled:;
- (void)didSelectFormat:forInput:;
- (id)metadataObjectOutput;
- (BOOL)metadataObjectOutputEnabled;
- (void)didReachEndOfDataForInput:;
- (void)setBoxedMetadataOutputEnabled:;
- (void)renderSampleBuffer:forInput:;
- (BOOL)boxedMetadataOutputEnabled;
- (id)nodeSubType;
@end
