@interface DNDModeAssertionUserRequestedLifetime : DNDModeAssertionLifetime
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (BOOL)isEqual:;
- (unsigned long long)lifetimeType;
+ (BOOL)supportsSecureCoding;
@end
