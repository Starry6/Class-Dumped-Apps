@interface ARSkeleton2D : ARSkeleton
@property (nonatomic) r^ jointLandmarks;
- (id)definition;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (unsigned long long)jointCount;
- (BOOL)isJointTracked:;
- (id)initWithDetectedSkeleton:;
- (id)jointLandmarks;
- (id)landmarkForJointNamed:;
+ (BOOL)supportsSecureCoding;
@end
