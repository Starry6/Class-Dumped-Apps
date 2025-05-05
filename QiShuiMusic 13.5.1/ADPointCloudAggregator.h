@interface ADPointCloudAggregator : NSObject
@property (nonatomic) ADAggregationParameters aggregationParameters;
@property (nonatomic) ADJasperPointCloudFilterParameters pointCloudFilterParameters;
@property (nonatomic) {?=[4]} jasperToCameraTransform;
@property (nonatomic) ADCameraCalibration colorCameraCalibration;
- (void)dealloc;
- (long long)clear;
- (void).cxx_destruct;
- (id)aggregateForTime:worldToCameraTransform:;
- (void)setColorCameraCalibration:;
- (void)setJasperToCameraTransform:;
- (id)colorCameraCalibration;
- (id)jasperToCameraTransform;
- (long long)pushPointCloud:timestamp:worldToCameraTransform:;
- (id)initWithAggregationParameters:;
- (id)aggregationParameters;
- (id)initWithAggregationParameters:jasperToColorTransform:colorCamera:;
- (long long)aggregateAndProjectForTime:worldToCameraTransform:cropTo:rotateBy:projectedPointsBuffer:;
- (long long)aggregateAndProjectForTime:worldToCameraTransform:filterParams:cropTo:rotateBy:projectedPointsBuffer:;
- (id)pointCloudFilterParameters;
- (void)setPointCloudFilterParameters:;
+ (id)transformMetersToMillimiters:;
@end
