@interface VNDetectFaceGazeRequestConfiguration : VNImageBasedRequestConfiguration
@property (nonatomic) float gazeHeatMapThreshold;
@property (nonatomic) float minimumFaceDimension;
@property (nonatomic) float commonGazeLocationRadius;
- (id)initWithRequestClass:;
- (id)copyWithZone:;
- (float)gazeHeatMapThreshold;
- (void)setGazeHeatMapThreshold:;
- (float)minimumFaceDimension;
- (void)setMinimumFaceDimension:;
- (float)commonGazeLocationRadius;
- (void)setCommonGazeLocationRadius:;
@end
