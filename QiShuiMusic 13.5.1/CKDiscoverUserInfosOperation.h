@interface CKDiscoverUserInfosOperation : CKOperation
@property (nonatomic) NSArray emailAddresses;
@property (nonatomic) NSArray userRecordIDs;
@property (nonatomic) @? discoverUserInfosCompletionBlock;
- (id)emailAddresses;
- (void).cxx_destruct;
- (void)setEmailAddresses:;
- (BOOL)CKOperationShouldRun:;
- (id)initWithEmailAddresses:userRecordIDs:;
- (id)userRecordIDs;
- (void)setUserRecordIDs:;
- (id)discoverUserInfosCompletionBlock;
- (void)setDiscoverUserInfosCompletionBlock:;
@end
