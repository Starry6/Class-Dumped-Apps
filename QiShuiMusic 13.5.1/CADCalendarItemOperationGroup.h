@interface CADCalendarItemOperationGroup : CADOperationGroup
- (void)CADDatabaseGetCalendarItemsWithUniqueIdentifier:inCalendar:reply:;
- (void)CADDatabaseCancelFetchRequestWithIdentifier:;
- (void)CADDatabaseExportICSForCalendarItemWithID:occurrenceDate:options:reply:;
- (void)CADDatabaseGetCalendarItemsWithUUIDs:inCalendars:propertiesToLoad:reply:;
- (void)CADDatabaseFetchCalendarItemsWithPredicate:entityType:fetchIdentifier:synchronous:reply:;
- (void)CADDatabaseGetCalendarItemWithUUID:reply:;
- (void)CADDatabaseiTIPImport:intoCalendarID:reply:;
- (void)CADDatabaseGetAlarmWithExternalID:reply:;
+ (BOOL)requiresEventAccess;
@end
