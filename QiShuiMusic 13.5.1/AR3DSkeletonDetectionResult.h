@interface AR3DSkeletonDetectionResult : NSObject
@property (nonatomic) Q jointCount;
@property (nonatomic) r^ joints;
@property (nonatomic) r^ jointsLocalSpace;
@property (nonatomic) ABPK2DDetectionResult skeletonDetectionResult2D;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithJoints:numberOfJoints:referenceDetectionResult:;
- (id)joints;
- (id)jointsLocalSpace;
- (unsigned long long)jointCount;
- (BOOL)isJointTracked:;
- (id)createResultScaledByFactor:;
- (id)skeletonDetectionResult2D;
+ (BOOL)supportsSecureCoding;
+ (id)childrenIndices;
+ (id)jointNames;
+ (id)parentIndices;
@end
