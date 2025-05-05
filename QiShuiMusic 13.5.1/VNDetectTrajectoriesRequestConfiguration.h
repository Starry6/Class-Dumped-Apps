@interface VNDetectTrajectoriesRequestConfiguration : VNStatefulRequestConfiguration
@property (nonatomic) q trajectoryLength;
@property (nonatomic) float objectMinimumNormalizedRadius;
@property (nonatomic) float objectMaximumNormalizedRadius;
@property (nonatomic) {?=qiIq} targetFrameTime;
- (id)initWithRequestClass:;
- (id)copyWithZone:;
- (long long)trajectoryLength;
- (void)setTrajectoryLength:;
- (float)objectMinimumNormalizedRadius;
- (void)setObjectMinimumNormalizedRadius:;
- (float)objectMaximumNormalizedRadius;
- (void)setObjectMaximumNormalizedRadius:;
- (id)targetFrameTime;
- (void)setTargetFrameTime:;
@end
