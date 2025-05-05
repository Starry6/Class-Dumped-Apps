@interface VNDetectFaceRectanglesRequestConfiguration : VNImageBasedRequestConfiguration
@property (nonatomic) Q faceCoreType;
@property (nonatomic) NSNumber faceCoreMinFaceSize;
@property (nonatomic) NSNumber faceCoreNumberOfDetectionAngles;
@property (nonatomic) NSNumber faceCoreInitialAngle;
@property (nonatomic) BOOL faceCoreEnhanceEyesAndMouthLocalization;
@property (nonatomic) BOOL faceCoreExtractBlink;
@property (nonatomic) BOOL faceCoreExtractSmile;
@property (nonatomic) float precisionRecallThreshold;
- (id)faceCoreMinFaceSize;
- (BOOL)faceCoreExtractBlink;
- (BOOL)faceCoreExtractSmile;
- (BOOL)faceCoreEnhanceEyesAndMouthLocalization;
- (void)setFaceCoreNumberOfDetectionAngles:;
- (void)setFaceCoreInitialAngle:;
- (void)setFaceCoreMinFaceSize:;
- (float)precisionRecallThreshold;
- (void)setFaceCoreType:;
- (id)faceCoreNumberOfDetectionAngles;
- (void)setFaceCoreExtractBlink:;
- (void)setFaceCoreExtractSmile:;
- (unsigned long long)faceCoreType;
- (void).cxx_destruct;
- (id)initWithRequestClass:;
- (id)faceCoreInitialAngle;
- (void)setPrecisionRecallThreshold:;
- (void)setFaceCoreEnhanceEyesAndMouthLocalization:;
- (id)copyWithZone:;
@end
