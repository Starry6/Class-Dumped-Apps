@interface CADDatabaseStorageManagementOperationGroup : CADOperationGroup
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)storageManagementAccessGranted;
- (unsigned long long)sizeCalendarDirectoryForDatabase:;
- (void)CADDatabaseGetStorageUsage:;
- (BOOL)accessGranted;
- (unsigned long long)sizeAttachmentsForDatabase:;
- (unsigned long long)sizeDirectoryAtPath:excludingDirectory:;
+ (BOOL)requiresEventAccess;
@end
