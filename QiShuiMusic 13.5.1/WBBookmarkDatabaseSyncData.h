@interface WBBookmarkDatabaseSyncData : NSObject
@property (nonatomic) CKServerChangeToken lastPrivateDatabaseServerChangeToken;
@property (nonatomic) CKServerChangeToken lastSharedDatabaseServerChangeToken;
@property (nonatomic) BOOL didNotSaveRecordsAfterMigration;
@property (nonatomic) NSData encodedDatabaseSyncData;
@property (nonatomic) q nextChangeID;
@property (nonatomic) Q minimumSyncAPIVersion;
@property (nonatomic) NSSet recordIDsToRefresh;
@property (nonatomic) NSSet auxiliaryRecordIDsToDelete;
@property (nonatomic) NSDictionary recordZoneIDsToHashGenerators;
- (id)init;
- (void)clearAllLastServerChangeTokens;
- (id)hashGeneratorForRecordZoneID:;
- (long long)nextChangeID;
- (void)setLastPrivateDatabaseServerChangeToken:;
- (id)initWithCoder:;
- (void)setAuxiliaryRecordIDsToDelete:;
- (BOOL)didNotSaveRecordsAfterMigration;
- (id)recordIDsToRefresh;
- (void)setRecordIDsToRefresh:;
- (void)setMinimumSyncAPIVersion:;
- (id)lastServerChangeTokenForRecordZoneID:;
- (id)lastPrivateDatabaseServerChangeToken;
- (id)auxiliaryRecordIDsToDelete;
- (void)encodeWithCoder:;
- (void)setLastSharedDatabaseServerChangeToken:;
- (id)recordZoneIDsToHashGenerators;
- (void).cxx_destruct;
- (void)setHashGenerator:forRecordZoneID:;
- (unsigned long long)minimumSyncAPIVersion;
- (void)writeToDatabase:databaseAccessor:;
- (id)encodedDatabaseSyncData;
- (id)lastSharedDatabaseServerChangeToken;
- (void)setLastServerChangeToken:forRecordZoneID:;
- (id)copyWithZone:;
- (void)setDidNotSaveRecordsAfterMigration:;
+ (BOOL)supportsSecureCoding;
+ (id)databaseSyncDataWithContentsOfData:;
+ (id)databaseSyncDataInDatabase:databaseAccessor:;
@end
