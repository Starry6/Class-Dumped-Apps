@interface CalSubscribedCalendarExternalRepresentation : NSObject
+ (id)logHandle;
+ (id)dictionaryWithExternalRepresentationData:;
+ (void)setLastHolidayLanguage:inDictionary:;
+ (int)migrationVersionFromDictionary:;
+ (void)setMigrationVersion:inDictionary:;
+ (void)setSubscribedCalendarRefreshFlags:inDictionary:;
+ (id)lastHolidayRegionFromDictionary:;
+ (id)externalRepresentationDataWithDictionary:;
+ (unsigned long long)subscribedCalendarRefreshFlagsFromDictionary:;
+ (void)setLastHolidayRegion:inDictionary:;
+ (id)lastHolidayLanguageFromDictionary:;
@end
