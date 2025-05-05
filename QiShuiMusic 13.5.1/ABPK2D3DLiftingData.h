@interface ABPK2D3DLiftingData : NSObject
@property (nonatomic) r^ joints;
@property (nonatomic) r^ rotatedJoints;
@property (nonatomic) Q jointCount;
@property (nonatomic) r^f liftingData3D;
@property (nonatomic) r^f unnormalizedLiftingData3D;
@property (nonatomic) Q liftingData3DElementCount;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)isEqual:;
- (id)rotatedJoints;
- (id)liftingData3D;
- (id)joints;
- (unsigned long long)jointCount;
- (id)initWithJoints:numberOfJoints:;
- (id)initWithJoints:numberOfJoints:liftingData3D:liftingData3DElementCount:;
- (id)initWithJoints:numberOfJoints:rotation:croppedRect:liftingData3D:liftingData3DElementCount:;
- (id)initWithHumanForLifting:imageSize:rotation:croppedRect:;
- (void)_rotateAndUndoCroppingFromRect:;
- (id)initWithJoints:numberOfJoints:imageSize:;
- (id)unnormalizedLiftingData3D;
- (unsigned long long)liftingData3DElementCount;
- (void)prepareLiftingInput:imageSize:pUnnormalizedMultiArray:pMultiArray:;
+ (BOOL)supportsSecureCoding;
@end
