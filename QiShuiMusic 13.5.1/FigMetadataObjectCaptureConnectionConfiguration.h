@interface FigMetadataObjectCaptureConnectionConfiguration : FigCaptureConnectionConfiguration
@property (nonatomic) NSArray metadataIdentifiers;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} metadataRectOfInterest;
@property (nonatomic) NSInteger faceTrackingMaxFaces;
@property (nonatomic) BOOL faceTrackingUsesFaceRecognition;
@property (nonatomic) BOOL faceTrackingPlusEnabled;
@property (nonatomic) float faceTrackingNetworkFailureThresholdMultiplier;
- (id)initWithXPCEncoding:;
- (void)dealloc;
- (id)copyXPCEncoding;
- (id)metadataRectOfInterest;
- (void)setMetadataRectOfInterest:;
- (id)metadataIdentifiers;
- (int)faceTrackingMaxFaces;
- (void)setMetadataIdentifiers:;
- (id)description;
- (BOOL)faceTrackingUsesFaceRecognition;
- (void)setFaceTrackingMaxFaces:;
- (void)setFaceTrackingPlusEnabled:;
- (BOOL)faceTrackingPlusEnabled;
- (float)faceTrackingNetworkFailureThresholdMultiplier;
- (void)setFaceTrackingNetworkFailureThresholdMultiplier:;
- (BOOL)isEqual:;
- (void)setFaceTrackingUsesFaceRecognition:;
- (id)copyWithZone:;
@end
