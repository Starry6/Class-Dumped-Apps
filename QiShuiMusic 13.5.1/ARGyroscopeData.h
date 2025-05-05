@interface ARGyroscopeData : NSObject
@property (nonatomic) double timestamp;
@property (nonatomic) {?=ddd} rotationRate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithDictionary:;
- (id)rotationRate;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void)setTimestamp:;
- (double)timestamp;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)setRotationRate:;
- (id)encodeToMetadataWrapper;
- (id)initWithMetadataWrapper:;
- (void)appendToWriter:;
- (id)encodeToDictionary;
- (id)initWithGyroData:;
+ (BOOL)supportsSecureCoding;
+ (id)grabNextFromReader:timestamp:;
@end
