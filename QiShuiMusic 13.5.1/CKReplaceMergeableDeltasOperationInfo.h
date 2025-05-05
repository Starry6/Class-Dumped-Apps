@interface CKReplaceMergeableDeltasOperationInfo : CKDatabaseOperationInfo
@property (nonatomic) NSArray replaceDeltasRequests;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)replaceDeltasRequests;
- (void)setReplaceDeltasRequests:;
+ (BOOL)supportsSecureCoding;
@end
