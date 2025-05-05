@interface WBSCloudBookmarksRemoteMigrationInfo : NSObject
@property (nonatomic) q migrationState;
@property (nonatomic) NSString migratorDeviceIdentifier;
@property (nonatomic) NSDate serverModificationDate;
- (id)init;
- (long long)migrationState;
- (id)migratorDeviceIdentifier;
- (void).cxx_destruct;
- (id)initWithMigrationState:migratorDeviceIdentifier:serverModificationDate:;
- (id)serverModificationDate;
@end
