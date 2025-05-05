@interface DNDModeAssertionCalendarEventLifetime : DNDModeAssertionLifetime
@property (nonatomic) NSString eventUniqueID;
@property (nonatomic) NSDate occurrenceDate;
@property (nonatomic) BOOL onlyDuringEvent;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)occurrenceDate;
- (BOOL)isEqual:;
- (unsigned long long)lifetimeType;
- (id)initWithEventUniqueID:occurrenceDate:onlyDuringEvent:;
- (id)eventUniqueID;
- (BOOL)isOnlyDuringEvent;
+ (BOOL)supportsSecureCoding;
@end
