@interface CVACMMotionData : NSObject
@property (nonatomic) CVACLMotionTypeDoubleVector4 quaternion;
@property (nonatomic) CVACLMotionTypeVector3 acceleration;
@property (nonatomic) CVACLMotionTypeVector3 rotationRate;
@property (nonatomic) double timestamp;
@property (nonatomic) Q syncTimestamp;
@property (nonatomic) Q sequenceNumber;
@property (nonatomic) Q frameId;
- (id)init;
- (id)acceleration;
- (id)rotationRate;
- (unsigned long long)frameId;
- (id)initWithCoder:;
- (void)setFrameId:;
- (id)quaternion;
- (void)setSequenceNumber:;
- (void)encodeWithCoder:;
- (void)setTimestamp:;
- (void)setQuaternion:;
- (unsigned long long)sequenceNumber;
- (void).cxx_destruct;
- (double)timestamp;
- (void)setAcceleration:;
- (void)setRotationRate:;
- (unsigned long long)syncTimestamp;
- (void)setSyncTimestamp:;
+ (BOOL)supportsSecureCoding;
+ (id)classes;
@end
