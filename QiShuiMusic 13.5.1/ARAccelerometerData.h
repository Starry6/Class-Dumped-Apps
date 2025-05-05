@interface ARAccelerometerData : NSObject
@property (nonatomic) double timestamp;
@property (nonatomic) {?=ddd} acceleration;
@property (nonatomic) double temperature;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setTemperature:;
- (id)initWithDictionary:;
- (id)acceleration;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void)setTimestamp:;
- (double)timestamp;
- (id)description;
- (double)temperature;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setAcceleration:;
- (id)encodeToMetadataWrapper;
- (id)initWithMetadataWrapper:;
- (void)appendToWriter:;
- (id)encodeToDictionary;
- (id)initWithAccelData:;
+ (BOOL)supportsSecureCoding;
+ (id)grabNextFromReader:timestamp:;
@end
