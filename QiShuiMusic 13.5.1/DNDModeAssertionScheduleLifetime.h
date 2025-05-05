@interface DNDModeAssertionScheduleLifetime : DNDModeAssertionLifetime
@property (nonatomic) NSString scheduleIdentifier;
@property (nonatomic) Q behavior;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)behavior;
- (BOOL)isEqual:;
- (unsigned long long)lifetimeType;
- (id)initWithScheduleIdentifier:behavior:;
- (id)scheduleIdentifier;
+ (BOOL)supportsSecureCoding;
@end
