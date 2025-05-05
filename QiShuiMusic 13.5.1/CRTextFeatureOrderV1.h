@interface CRTextFeatureOrderV1 : NSObject
@property (nonatomic) double angleThresholdForRotatedCrops;
- (id)orderAndGroupFeatures:imageSize:;
- (id)initWithAngleThresholdForRotatedCrops:;
- (double)angleThresholdForRotatedCrops;
- (void)setAngleThresholdForRotatedCrops:;
@end
