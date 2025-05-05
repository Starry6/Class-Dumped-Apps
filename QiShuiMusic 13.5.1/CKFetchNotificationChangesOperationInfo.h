@interface CKFetchNotificationChangesOperationInfo : CKOperationInfo
@property (nonatomic) CKServerChangeToken previousServerChangeToken;
@property (nonatomic) Q resultsLimit;
@property (nonatomic) BOOL wantsChanges;
- (void)setResultsLimit:;
- (void)setPreviousServerChangeToken:;
- (id)previousServerChangeToken;
- (unsigned long long)resultsLimit;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)wantsChanges;
- (void)setWantsChanges:;
+ (BOOL)supportsSecureCoding;
@end
