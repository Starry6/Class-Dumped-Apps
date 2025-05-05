@interface CKModifyRecordZonesOperationInfo : CKDatabaseOperationInfo
@property (nonatomic) NSArray recordZonesToSave;
@property (nonatomic) NSArray recordZoneIDsToDelete;
@property (nonatomic) BOOL allowDefaultZoneSave;
@property (nonatomic) BOOL markZonesAsUserPurged;
@property (nonatomic) q maxZoneSaveAttempts;
@property (nonatomic) BOOL dontFetchFromServer;
- (void)setRecordZonesToSave:;
- (BOOL)markZonesAsUserPurged;
- (id)recordZonesToSave;
- (long long)maxZoneSaveAttempts;
- (id)recordZoneIDsToDelete;
- (void)setAllowDefaultZoneSave:;
- (void)setMarkZonesAsUserPurged:;
- (BOOL)allowDefaultZoneSave;
- (void)setDontFetchFromServer:;
- (id)initWithCoder:;
- (BOOL)dontFetchFromServer;
- (void)setRecordZoneIDsToDelete:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setMaxZoneSaveAttempts:;
+ (BOOL)supportsSecureCoding;
@end
