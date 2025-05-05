@interface ABPK3DLiftingResult : NSObject
@property (nonatomic) Q jointCount;
@property (nonatomic) ^ joints;
@property (nonatomic) ^ rawNetworkOutputJoints;
@property (nonatomic) ABPK2DDetectionResult skeletonDetectionResult2D;
@property (nonatomic) float estimatedScale;
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithJoints:numberOfJoints:referenceDetectionResult:;
- (id)joints;
- (unsigned long long)jointCount;
- (BOOL)isJointTracked:;
- (id)createResultScaledByFactor:;
- (id)skeletonDetectionResult2D;
- (float)estimatedScale;
- (void)setEstimatedScale:;
- (id)initWithJoints:rawNetworkOutputs:referenceDetectionResult:;
- (id)initWithJoints:numberOfJoints:rawNetworkOutputs:referenceDetectionResult:;
- (id)initWithJoints:numberOfJoints:;
- (id)rawNetworkOutputJoints;
@end
