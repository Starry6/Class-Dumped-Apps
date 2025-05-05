@interface CADCalendarOperationGroup : CADOperationGroup
- (void)CADDatabaseGetCalendarsWithFaultedProperties:reply:;
- (void)CADCalendar:hasEvents:;
- (int)_tryPerformBlockWithCalendarID:forAction:withBlock:;
+ (BOOL)requiresEventAccess;
@end
