@interface CKUploadMergeableDeltasOperationInfo : CKDatabaseOperationInfo
@property (nonatomic) NSArray deltas;
@property (nonatomic) NSArray replacementRequests;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)deltas;
- (id)replacementRequests;
- (void)setDeltas:;
- (void)setReplacementRequests:;
+ (BOOL)supportsSecureCoding;
@end
