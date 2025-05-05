@interface GEOHoursTestHelper : NSObject
+ (id)dateWithString:;
+ (id)testBusinessHoursForMKLocalizedHoursBuilderTest;
+ (id)testBusinessHoursWithPermanentlyClosedHoursTypeForMKLocalizedHoursBuilderTest;
+ (id)testBusinessHoursWithTemporaryClosedHoursTypeForMKLocalizedHoursBuilderTest;
+ (id)testDateForMKLocalizedHoursBuilderTest;
+ (id)testTimeZoneForMKLocalizedHoursBuilderTest;
+ (id)testTimeZoneForGEOPlaceDailyHoursTest;
+ (id)_pdHoursFromHour:fromMinute:toHour:toMinute:inTimeZone:onDay:month:year:openingThreshold:closingThreshold:shouldGoOverMidnight:;
+ (id)_rangeWithFromHour:fromMinute:toHour:toMinute:;
+ (id)testingDictionaryForIsWeekdayInRange;
@end
