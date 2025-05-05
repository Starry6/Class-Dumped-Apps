@interface CMAmbientPressureData : CMLogItem
@property (nonatomic) NSMeasurement pressure;
@property (nonatomic) NSMeasurement temperature;
- (void)dealloc;
- (id)pressure;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (id)temperature;
- (id)copyWithZone:;
- (id)initWithPressure:andTimestamp:;
- (long long)sr_writeUTF8RepresentationToOutputStream:;
- (BOOL)sr_prefersUTF8StringRepresentation;
+ (BOOL)supportsSecureCoding;
@end
