@interface CRTextFeatureOrderV2 : NSObject
@property (nonatomic) double angleThresholdForRotatedCrops;
@property (nonatomic) q textFeatureOrderMode;
- (id)orderAndGroupFeatures:imageSize:;
- (id)initWithAngleThresholdForRotatedCrops:;
- (void)enforceQuadrilateralOrder:;
- (id)CTLDRegionFromCRTextFeature:index:imageSize:rotationAngle:;
- (float)getQuadrantOrientation:;
- (float)getFeaturesGlobalAngle:;
- (id)createCoarseCTLD;
- (id)createFineCTLD;
- (id)singleCTLDGroupingPass:textFeatures:imageSize:;
- (long long)textFeatureOrderMode;
- (void)setTextFeatureOrderMode:;
- (double)angleThresholdForRotatedCrops;
- (void)setAngleThresholdForRotatedCrops:;
+ (id)_normalizePoint:imageSize:;
@end
