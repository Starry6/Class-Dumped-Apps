@interface ARMagnetometerData : NSObject
@property (nonatomic) double timestamp;
@property (nonatomic) {?=ddd} magneticField;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void)setTimestamp:;
- (double)timestamp;
- (id)description;
- (id)magneticField;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setMagneticField:;
- (id)encodeToMetadataWrapper;
- (id)initWithMetadataWrapper:;
- (void)appendToWriter:;
- (id)initWithCompassData:;
+ (BOOL)supportsSecureCoding;
+ (id)grabNextFromReader:timestamp:;
@end
