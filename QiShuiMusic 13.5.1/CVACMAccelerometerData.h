@interface CVACMAccelerometerData : NSObject
@property (nonatomic) CVACLMotionTypeVector3 acceleration;
@property (nonatomic) double timestamp;
@property (nonatomic) float temperature;
@property (nonatomic) Q syncTimestamp;
@property (nonatomic) Q sequenceNumber;
@property (nonatomic) Q frameId;
- (id)dictionary;
- (id)init;
- (void)setTemperature:;
- (id)initWithDictionary:;
- (id)acceleration;
- (unsigned long long)frameId;
- (id)initWithCoder:;
- (void)setFrameId:;
- (void)setSequenceNumber:;
- (void)encodeWithCoder:;
- (void)setTimestamp:;
- (unsigned long long)sequenceNumber;
- (void).cxx_destruct;
- (double)timestamp;
- (float)temperature;
- (void)setAcceleration:;
- (unsigned long long)syncTimestamp;
- (void)setSyncTimestamp:;
+ (BOOL)supportsSecureCoding;
@end
