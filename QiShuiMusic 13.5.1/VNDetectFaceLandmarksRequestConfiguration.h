@interface VNDetectFaceLandmarksRequestConfiguration : VNImageBasedRequestConfiguration
@property (nonatomic) BOOL refineMouthRegion;
@property (nonatomic) BOOL refineLeftEyeRegion;
@property (nonatomic) BOOL refineRightEyeRegion;
@property (nonatomic) BOOL performBlinkDetection;
@property (nonatomic) NSNumber cascadeStepCount;
@property (nonatomic) Q constellation;
- (BOOL)refineMouthRegion;
- (void)setRefineLeftEyeRegion:;
- (BOOL)refineLeftEyeRegion;
- (void)setConstellation:;
- (id)cascadeStepCount;
- (BOOL)performBlinkDetection;
- (unsigned long long)constellation;
- (void)setRefineRightEyeRegion:;
- (void).cxx_destruct;
- (void)setCascadeStepCount:;
- (id)initWithRequestClass:;
- (void)setRefineMouthRegion:;
- (BOOL)refineRightEyeRegion;
- (void)setPerformBlinkDetection:;
- (id)copyWithZone:;
+ (BOOL)revision:supportsConstellation:;
@end
