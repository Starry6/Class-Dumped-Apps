@interface CMAltitudeData : CMLogItem
@property (nonatomic) NSNumber relativeAltitude;
@property (nonatomic) NSNumber pressure;
- (void)dealloc;
- (id)pressure;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (id)copyWithZone:;
- (id)initWithAltitude:andTimestamp:atBaseAltitude:;
- (id)initWithTimestamp:pressure:relativeAltitude:;
- (id)relativeAltitude;
+ (BOOL)supportsSecureCoding;
@end
