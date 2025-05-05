@interface CADSyncOperationGroup : CADOperationGroup
- (void)CADDatabaseGetDeletableCalendars:;
- (BOOL)accessGranted;
- (void)CADDatabaseGetDeletableSources:;
+ (BOOL)requiresEventAccess;
@end
