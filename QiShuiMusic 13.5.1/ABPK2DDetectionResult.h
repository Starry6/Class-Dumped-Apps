@interface ABPK2DDetectionResult : NSObject
@property (nonatomic) r^ joints;
@property (nonatomic) r^ rawJointsOutput;
@property (nonatomic) r^I jointTrackingStates;
@property (nonatomic) Q jointCount;
@property (nonatomic) {CGSize=dd} imageResolution;
@property (nonatomic) ABPK2D3DLiftingData liftingData;
@property (nonatomic) q rotation;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (long long)rotation;
- (id).cxx_construct;
- (BOOL)isEqual:;
- (id)imageResolution;
- (id)jointTrackingStates;
- (id)liftingData;
- (id)initWithJoints:trackingStates:numberOfJoints:imageResolution:rotation:croppedRect:liftingData:;
- (id)initWithJoints:trackingStates:numberOfJoints:rotation:croppedRect:liftingData:;
- (id)rawJointsOutput;
- (id)joints;
- (unsigned long long)jointCount;
- (unsigned long long)trackedJointCount;
- (id)alignSkeleton:rotationNeeded:;
+ (BOOL)supportsSecureCoding;
@end
