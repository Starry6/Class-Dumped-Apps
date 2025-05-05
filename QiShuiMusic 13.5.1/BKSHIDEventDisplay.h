@interface BKSHIDEventDisplay : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (BOOL)_isNullDisplay;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)initForProtobufDecoding;
- (void)encodeWithCoder:;
- (id)_initWithHardwareIdentifier:;
- (void).cxx_destruct;
- (id)description;
- (id)_hardwareIdentifier;
- (BOOL)_isBuiltinDisplay;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (id)builtinDisplay;
+ (id)displayWithHardwareIdentifier:;
+ (id)protobufSchema;
+ (BOOL)supportsSecureCoding;
+ (id)nullDisplay;
@end
