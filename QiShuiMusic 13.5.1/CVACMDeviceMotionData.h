@interface CVACMDeviceMotionData : NSObject
@property (nonatomic) CVACMMotionTypeDeviceMotionData deviceMotion;
@property (nonatomic) double timestamp;
@property (nonatomic) Q syncTimestamp;
- (id)dictionary;
- (id)init;
- (id)initWithDictionary:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)setTimestamp:;
- (id)deviceMotion;
- (void).cxx_destruct;
- (double)timestamp;
- (void)setDeviceMotion:;
- (unsigned long long)syncTimestamp;
- (void)setSyncTimestamp:;
- (id)initWithCMDeviceMotion:;
+ (BOOL)supportsSecureCoding;
@end
