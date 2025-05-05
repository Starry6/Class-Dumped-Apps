@interface CKFetchRecordZonesOperationInfo : CKDatabaseOperationInfo
@property (nonatomic) NSArray recordZoneIDs;
@property (nonatomic) BOOL isFetchAllRecordZonesOperation;
@property (nonatomic) BOOL ignorePCSFailures;
- (void)setRecordZoneIDs:;
- (id)recordZoneIDs;
- (void)setIsFetchAllRecordZonesOperation:;
- (id)initWithCoder:;
- (BOOL)isFetchAllRecordZonesOperation;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setIgnorePCSFailures:;
- (BOOL)ignorePCSFailures;
+ (BOOL)supportsSecureCoding;
@end
