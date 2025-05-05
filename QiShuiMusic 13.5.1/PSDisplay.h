@interface PSDisplay : NSObject
- (id)hardwareIdentifier;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)_initWithHardwareIdentifier:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (id)builtinDisplay;
+ (id)displayWithHardwareIdentifier:;
+ (BOOL)supportsSecureCoding;
@end
