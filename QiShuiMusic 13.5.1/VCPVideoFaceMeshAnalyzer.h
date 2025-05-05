@interface VCPVideoFaceMeshAnalyzer : NSObject
@property (nonatomic) {?=[4]} pose;
@property (nonatomic) NSDictionary blendShapes;
@property (nonatomic) Q vertexCount;
@property (nonatomic) r^ vertices;
@property (nonatomic) r^f landmarks;
@property (nonatomic) BOOL bufferRotated;
- (void)dealloc;
- (int)setFrame:;
- (unsigned long long)vertexCount;
- (void).cxx_destruct;
- (id)pose;
- (id)landmarks;
- (id)vertices;
- (id)blendShapes;
- (BOOL)isTracked;
- (BOOL)updateFocalLengthInPixels:;
- (id)initWithFocalLengthInPixels:offline:isFastMode:;
- (void)updateIntrinsicWhenRotated;
- (void)makeValidationDecision;
- (int)validateFace:eulerAngles:;
- (int)checkResolutionChange:withRotation:;
- (void)rotateLandmarks:width:height:landmarks:numLandmarks:;
- (int)analyzeFrame:withFaceRect:withRotation:withTimestamp:;
- (void)mapToCameraNegativeZ;
- (BOOL)bufferRotated;
@end
