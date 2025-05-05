@interface VNTrajectoryObservation : VNObservation
@property (nonatomic) NSArray detectedPoints;
@property (nonatomic) NSArray projectedPoints;
@property (nonatomic)  equationCoefficients;
@property (nonatomic) double movingAverageRadius;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)vn_cloneObject;
- (id)detectedPoints;
- (id)projectedPoints;
- (id)equationCoefficients;
- (double)movingAverageRadius;
- (id)detectedPointsInTopLeftOrigin:orientation:;
- (id)projectedPointsInTopLeftOrigin:orientation:;
+ (BOOL)supportsSecureCoding;
@end
