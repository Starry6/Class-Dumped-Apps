@interface CKFetchDatabaseChangesOperationInfo : CKDatabaseOperationInfo
@property (nonatomic) CKServerChangeToken previousServerChangeToken;
@property (nonatomic) Q resultsLimit;
@property (nonatomic) BOOL fetchAllChanges;
- (void)setResultsLimit:;
- (void)setPreviousServerChangeToken:;
- (id)previousServerChangeToken;
- (id)init;
- (void)setFetchAllChanges:;
- (BOOL)fetchAllChanges;
- (unsigned long long)resultsLimit;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
+ (BOOL)supportsSecureCoding;
@end
