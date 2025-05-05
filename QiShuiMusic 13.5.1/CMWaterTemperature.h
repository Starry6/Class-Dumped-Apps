@interface CMWaterTemperature : NSObject
@property (nonatomic) NSDate date;
@property (nonatomic) NSMeasurement temperature;
@property (nonatomic) NSMeasurement temperatureUncertainty;
- (void)dealloc;
- (id)initWithCoder:;
- (id)date;
- (void)encodeWithCoder:;
- (id)description;
- (id)temperature;
- (id)copyWithZone:;
- (id)initWithTemperature:andTemperatureUncertainty:andDate:;
- (id)temperatureUncertainty;
+ (BOOL)supportsSecureCoding;
@end
