@interface CADAlarmEngineOperationGroup : CADOperationGroup
- (void)CADDatabaseGetAlarmOccurrencesInRangeFromStart:toEnd:inCalendars:reply:;
- (id)_getAlarmOccurrencesInRangeFromStart:toEnd:inCalendars:forDatabase:databaseID:calendarIDsForThisDatabase:accessLogger:;
- (void)CADDatabaseGetAlarmWithUUID:reply:;
+ (id)whitelistedBundles;
+ (BOOL)requiresEventAccess;
@end
