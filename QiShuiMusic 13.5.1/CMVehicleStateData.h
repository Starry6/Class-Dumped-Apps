@interface CMVehicleStateData : NSObject
@property (nonatomic) CMMotionTimeRange timeRange;
@property (nonatomic) NSString deviceId;
@property (nonatomic) Q vehicularState;
@property (nonatomic) Q vehicularHints;
- (unsigned long long)vehicularHints;
- (id)timeRange;
- (id)deviceId;
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (unsigned long long)vehicularState;
- (id)copyWithZone:;
- (id)initWithTimeRange:deviceId:;
- (id)initWithTimestamp:state:hints:;
+ (BOOL)supportsSecureCoding;
@end
