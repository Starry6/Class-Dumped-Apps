@interface CKFetchRecordVersionsOperationInfo : CKDatabaseOperationInfo
@property (nonatomic) NSArray recordIDs;
@property (nonatomic) NSArray desiredKeys;
@property (nonatomic) NSString minimumVersionETag;
@property (nonatomic) BOOL shouldFetchAssetContent;
- (void)setShouldFetchAssetContent:;
- (void)setRecordIDs:;
- (void)setDesiredKeys:;
- (id)init;
- (id)recordIDs;
- (BOOL)shouldFetchAssetContent;
- (id)desiredKeys;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)minimumVersionETag;
- (void)setMinimumVersionETag:;
+ (BOOL)supportsSecureCoding;
@end
