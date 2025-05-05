@interface WBSRetryableCKFetchShareMetadataOperation : WBSRetryableCKOperation
@property (nonatomic) NSArray shareURLs;
@property (nonatomic) NSDictionary shareInvitationTokensByShareURL;
@property (nonatomic) BOOL shouldFetchRootRecord;
@property (nonatomic) NSArray rootRecordDesiredKeys;
@property (nonatomic) @? perShareMetadataBlock;
@property (nonatomic) @? fetchShareMetadataCompletionBlock;
- (void)_setUpOperation:;
- (id)_makeOperation;
- (void).cxx_destruct;
- (void)setFetchShareMetadataCompletionBlock:;
- (void)setPerShareMetadataBlock:;
- (id)rootRecordDesiredKeys;
- (void)setRootRecordDesiredKeys:;
- (id)perShareMetadataBlock;
- (id)fetchShareMetadataCompletionBlock;
- (id)shareURLs;
- (void)setShareURLs:;
- (BOOL)shouldFetchRootRecord;
- (void)setShouldFetchRootRecord:;
- (id)shareInvitationTokensByShareURL;
- (void)setShareInvitationTokensByShareURL:;
@end
