@interface CVACMCompassData : NSObject
@property (nonatomic) CVACLMotionTypeVector3 fieldValues;
@property (nonatomic) float temperature;
@property (nonatomic) double timestamp;
@property (nonatomic) Q syncTimestamp;
@property (nonatomic) Q sequenceNumber;
@property (nonatomic) Q frameId;
- (id)init;
- (void)setTemperature:;
- (id)initWithDictionary:;
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
- (id)fieldValues;
- (void)setFieldValues:;
- (unsigned long long)syncTimestamp;
- (void)setSyncTimestamp:;
+ (BOOL)supportsSecureCoding;
+ (id)classes;
@end
