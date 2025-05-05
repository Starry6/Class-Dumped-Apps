@interface BKSHIDUISensorCharacteristics : NSObject
@property (nonatomic) BOOL hasDiscreteProximitySensor;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)mutableCopy;
- (id)initForProtobufDecoding;
- (void)encodeWithCoder:;
- (id)description;
- (void)appendDescriptionToFormatter:;
- (id)_init;
- (BOOL)hasDiscreteProximitySensor;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (id)new;
+ (id)protobufSchema;
+ (BOOL)supportsSecureCoding;
@end
