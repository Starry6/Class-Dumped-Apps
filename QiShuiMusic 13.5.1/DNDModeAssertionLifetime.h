@interface DNDModeAssertionLifetime : NSObject
@property (nonatomic) Q lifetimeType;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)_init;
- (id)copyWithZone:;
- (unsigned long long)lifetimeType;
+ (BOOL)supportsSecureCoding;
+ (id)lifetimeWithDuration:;
+ (id)lifetimeWithCurrentLocation;
+ (id)lifetimeWithDateInterval:;
+ (id)lifetimeUntilEndOfCalendarEventWithUniqueID:occurrenceDate:;
+ (id)lifetimeWithCalendarEventUniqueID:occurrenceDate:;
+ (id)lifetimeMatchingScheduleWithIdentifier:;
+ (id)lifetimeUntilEndOfScheduleWithIdentifier:;
+ (id)lifetimeWithExplicitRegion:;
+ (id)lifetimeForUserRequest;
+ (id)_secureCodingLifetimeClasses;
@end
