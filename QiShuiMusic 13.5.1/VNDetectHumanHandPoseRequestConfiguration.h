@interface VNDetectHumanHandPoseRequestConfiguration : VNImageBasedRequestConfiguration
@property (nonatomic) Q maximumHandCount;
- (id)initWithRequestClass:;
- (id)copyWithZone:;
- (unsigned long long)maximumHandCount;
- (void)setMaximumHandCount:;
@end
