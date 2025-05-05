@interface VNDetectScreenGazeRequestConfiguration : VNStatefulRequestConfiguration
@property (nonatomic) q temporalSmoothingFrameCount;
- (id)initWithRequestClass:;
- (id)copyWithZone:;
- (long long)temporalSmoothingFrameCount;
- (void)setTemporalSmoothingFrameCount:;
@end
