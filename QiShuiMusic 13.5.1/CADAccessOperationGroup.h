@interface CADAccessOperationGroup : CADOperationGroup
- (void)CADDatabaseGetAccess:;
- (void)CADDatabaseSetInitializationOptions:reply:;
- (void)CADDatabaseResetWithReply:;
+ (BOOL)requiresEventAccess;
@end
