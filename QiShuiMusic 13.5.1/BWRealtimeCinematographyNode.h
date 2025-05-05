@interface BWRealtimeCinematographyNode : BWNode
@property (nonatomic) BWNodeOutput detectedObjectsOutput;
@property (nonatomic) float simulatedAperture;
@property (nonatomic) NSString cinematographyModelVersionString;
@property (nonatomic) BWNodeOutput movieFileOutput;
@property (nonatomic) BWNodeOutput previewOutput;
@property (nonatomic) NSData globalMetadata;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)handleDroppedSample:forInput:;
- (id)previewOutput;
- (id)nodeType;
- (id)detectedObjectsOutput;
- (void)configurationWithID:updatedFormat:didBecomeLiveForInput:;
- (void)didSelectFormat:forInput:;
- (float)simulatedAperture;
- (id)movieFileOutput;
- (void)setSimulatedAperture:;
- (void)didReachEndOfDataForInput:;
- (void)renderSampleBuffer:forInput:;
- (id)nodeSubType;
- (id)initWithObjectMetadataIdentifiers:cachedSimulatedAperture:captureDevice:tuningParameters:videoDepthConfiguration:captureInputEnabled:;
- (id)globalMetadata;
- (id)cinematographyModelVersionString;
@end
