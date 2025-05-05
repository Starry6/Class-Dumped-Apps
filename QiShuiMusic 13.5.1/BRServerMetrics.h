@interface BRServerMetrics : NSObject
@property (nonatomic) NSNumber quotaUsed;
@property (nonatomic) NSNumber recursiveChildCount;
@property (nonatomic) NSNumber sharedByMeRecursiveCount;
@property (nonatomic) NSNumber sharedAliasRecursiveCount;
@property (nonatomic) NSNumber childCount;
- (id)childCount;
- (id)quotaUsed;
- (void)setRecursiveChildCount:;
- (void)setQuotaUsed:;
- (id)initWithCoder:;
- (void)setSharedAliasRecursiveCount:;
- (id)initWithServerMetrics:;
- (void)encodeWithCoder:;
- (id)sharedByMeRecursiveCount;
- (void)setSharedByMeRecursiveCount:;
- (id)initFromResultSet:pos:;
- (void).cxx_destruct;
- (void)setChildCount:;
- (id)description;
- (id)sharedAliasRecursiveCount;
- (id)recursiveChildCount;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
