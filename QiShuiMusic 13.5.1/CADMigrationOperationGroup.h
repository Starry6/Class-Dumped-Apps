@interface CADMigrationOperationGroup : CADOperationGroup
- (void)CADMigrateDatabaseIfNeeded:;
+ (BOOL)requiresEventAccess;
@end
