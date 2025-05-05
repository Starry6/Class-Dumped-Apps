@interface EKFrozenReminderRecurrenceRule : EKFrozenReminderObject
- (id)remObjectID;
- (id)uniqueIdentifier;
- (id)uuid;
- (id)endDate;
- (id)specifier;
- (unsigned long long)count;
- (long long)interval;
- (id)_recurrenceRule;
- (int)frequencyRaw;
- (int)firstDayOfTheWeekRaw;
- (id)initWithREMObject:inStore:withChanges:;
- (id)initWithAlternateUniverseObject:inEventStore:withUpdatedChildObjects:;
- (id)initWithREMObject:inStore:;
- (id)addUpdatedRecurrenceRule:;
- (long long)ekWeekdayToREMWeekday:;
- (long long)remWeekdayToEKWeekday:;
- (id)daysOfTheWeekFromREMRecurrenceRule;
- (id)remDaysOfTheWeekFromEKDaysOfTheWeek:;
- (void)loadSpecifierDaysOfTheWeek:daysOfTheMonth:monthsOfTheYear:weeksOfTheYear:daysOfTheYear:setPositions:;
+ (Class)meltedClass;
+ (int)convertFromReminderKitFrequency:;
+ (long long)convertToReminderKitFrequency:;
+ (int)convertFromReminderKitWeekday:;
+ (long long)convertToReminderKitWeekday:;
@end
