@interface DNDModeAssertionExplicitRegionLifetime : DNDModeAssertionLifetime
@property (nonatomic) CLCircularRegion region;
- (id)region;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)initWithRegion:;
- (unsigned long long)lifetimeType;
+ (BOOL)supportsSecureCoding;
@end
