@interface CKPublishAssetsOperationInfo : CKDatabaseOperationInfo
@property (nonatomic) NSArray recordIDs;
@property (nonatomic) NSDictionary fileNamesByAssetFieldNames;
@property (nonatomic) Q requestedTTL;
@property (nonatomic) Q URLOptions;
- (unsigned long long)URLOptions;
- (void)setURLOptions:;
- (void)setRequestedTTL:;
- (void)setRecordIDs:;
- (unsigned long long)requestedTTL;
- (id)recordIDs;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)fileNamesByAssetFieldNames;
- (void)setFileNamesByAssetFieldNames:;
+ (BOOL)supportsSecureCoding;
@end
