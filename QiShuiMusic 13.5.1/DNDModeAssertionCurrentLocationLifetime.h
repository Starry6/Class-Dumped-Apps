@interface DNDModeAssertionCurrentLocationLifetime : DNDModeAssertionLifetime
- (id)awakeAfterUsingCoder:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)description;
- (BOOL)isEqual:;
- (unsigned long long)lifetimeType;
+ (BOOL)supportsSecureCoding;
+ (id)sharedInstance;
@end
