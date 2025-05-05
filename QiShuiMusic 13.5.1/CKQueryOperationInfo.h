@interface CKQueryOperationInfo : CKDatabaseOperationInfo
@property (nonatomic) CKQuery query;
@property (nonatomic) CKRecordZoneID zoneID;
@property (nonatomic) CKQueryCursor cursor;
@property (nonatomic) Q resultsLimit;
@property (nonatomic) NSArray desiredKeys;
@property (nonatomic) BOOL shouldFetchAssetContent;
@property (nonatomic) BOOL fetchAllResults;
@property (nonatomic) NSDictionary assetTransferOptionsByKey;
- (id)cursor;
- (id)init;
- (BOOL)shouldFetchAssetContent;
- (id)assetTransferOptionsByKey;
- (BOOL)fetchAllResults;
- (unsigned long long)resultsLimit;
- (id)desiredKeys;
- (id)zoneID;
- (id)query;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
+ (BOOL)supportsSecureCoding;
@end
