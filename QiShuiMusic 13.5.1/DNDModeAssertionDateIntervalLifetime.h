@interface DNDModeAssertionDateIntervalLifetime : DNDModeAssertionLifetime
@property (nonatomic) NSDateInterval dateInterval;
- (id)dateInterval;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)initWithDateInterval:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (BOOL)isActiveForDate:;
- (unsigned long long)lifetimeType;
+ (BOOL)supportsSecureCoding;
@end
