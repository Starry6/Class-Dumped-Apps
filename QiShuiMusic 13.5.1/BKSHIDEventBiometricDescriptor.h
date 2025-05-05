@interface BKSHIDEventBiometricDescriptor : BKSHIDEventDescriptor
@property (nonatomic) I biometricEventType;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (BOOL)describes:;
- (unsigned int)biometricEventType;
- (void)encodeWithCoder:;
- (id)initWithBiometricEventType:;
- (id)descriptionBuilderWithMultilinePrefix:;
- (BOOL)isEqual:;
+ (BOOL)supportsSecureCoding;
+ (id)descriptorWithBiometricEventType:;
@end
