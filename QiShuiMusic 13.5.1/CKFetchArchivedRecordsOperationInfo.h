@interface CKFetchArchivedRecordsOperationInfo : CKDatabaseOperationInfo
@property (nonatomic) NSArray recordZoneIDs;
@property (nonatomic) NSDictionary configurationsByRecordZoneID;
@property (nonatomic) BOOL shouldFetchAssetContents;
@property (nonatomic) BOOL fetchAllChanges;
@property (nonatomic) NSDictionary assetTransferOptionsByRecordTypeAndKey;
- (BOOL)shouldFetchAssetContents;
- (id)configurationsByRecordZoneID;
- (id)init;
- (void)setRecordZoneIDs:;
- (void)setConfigurationsByRecordZoneID:;
- (id)assetTransferOptionsByRecordTypeAndKey;
- (void)setFetchAllChanges:;
- (void)setAssetTransferOptionsByRecordTypeAndKey:;
- (BOOL)fetchAllChanges;
- (id)recordZoneIDs;
- (void)setShouldFetchAssetContents:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
+ (BOOL)supportsSecureCoding;
@end
