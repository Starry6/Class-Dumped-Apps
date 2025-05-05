@interface CMAttitude : NSObject
@property (nonatomic) double roll;
@property (nonatomic) double pitch;
@property (nonatomic) double yaw;
@property (nonatomic) {?=ddddddddd} rotationMatrix;
@property (nonatomic) {?=dddd} quaternion;
- (double)yaw;
- (void)dealloc;
- (double)pitch;
- (id)initWithCoder:;
- (id)rotationMatrix;
- (void)multiplyByInverseOfAttitude:;
- (id)initWithQuaternion:;
- (id)quaternion;
- (double)roll;
- (void)encodeWithCoder:;
- (void)setQuaternion:;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
