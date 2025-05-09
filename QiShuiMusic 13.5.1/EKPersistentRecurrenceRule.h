@interface EKPersistentRecurrenceRule : EKPersistentObject
- (void)setCount:;
- (void)setUUID:;
- (void)setOwner:;
- (id)owner;
- (void)setSpecifier:;
- (void)setEndDate:;
- (id)endDate;
- (void)setInterval:;
- (id)specifier;
- (int)entityType;
- (id)description;
- (unsigned long long)count;
- (id)UUID;
- (long long)interval;
- (id)copyWithZone:;
- (int)frequencyRaw;
- (void)setFrequencyRaw:;
- (id)cachedEndDate;
- (void)setCachedEndDate:;
- (id)cachedEndDateTimeZone;
- (void)setCachedEndDateTimeZone:;
- (long long)firstDayOfTheWeekRaw;
- (void)setFirstDayOfTheWeekRaw:;
+ (id)propertyKeyForUniqueIdentifier;
+ (id)relations;
+ (Class)alternateUniverseClass;
+ (id)defaultPropertiesToLoad;
+ (Class)meltedClass;
@end
