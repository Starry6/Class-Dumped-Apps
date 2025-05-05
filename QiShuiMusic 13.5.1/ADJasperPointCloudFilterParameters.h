@interface ADJasperPointCloudFilterParameters : NSObject
@property (nonatomic) Q echoMode;
@property (nonatomic) float confidenceThreshold;
@property (nonatomic) float minDistance;
@property (nonatomic) float maxDistance;
@property (nonatomic) float shortRangeDepthThreshold;
@property (nonatomic) float shortRangeConfidenceThreshold;
- (id)init;
- (float)maxDistance;
- (void)setMaxDistance:;
- (float)confidenceThreshold;
- (void)setConfidenceThreshold:;
- (void)setEchoMode:;
- (void)setShortRangeConfidenceThreshold:;
- (void)setShortRangeDepthThreshold:;
- (void)setMinDistance:;
- (unsigned long long)echoMode;
- (float)minDistance;
- (float)shortRangeDepthThreshold;
- (float)shortRangeConfidenceThreshold;
@end
