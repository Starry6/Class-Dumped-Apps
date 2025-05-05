@interface CKFetchMergeableDeltaMetadataOperationInfo : CKDatabaseOperationInfo
@property (nonatomic) NSArray mergeableValueIDs;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)mergeableValueIDs;
- (void)setMergeableValueIDs:;
+ (BOOL)supportsSecureCoding;
@end
