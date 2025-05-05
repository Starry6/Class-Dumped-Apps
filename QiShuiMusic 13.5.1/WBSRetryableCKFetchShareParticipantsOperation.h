@interface WBSRetryableCKFetchShareParticipantsOperation : WBSRetryableCKOperation
@property (nonatomic) NSArray userIdentityLookupInfos;
@property (nonatomic) @? perShareParticipantCompletionBlock;
@property (nonatomic) @? fetchShareParticipantsCompletionBlock;
- (void)_setUpOperation:;
- (id)_makeOperation;
- (void).cxx_destruct;
- (void)setFetchShareParticipantsCompletionBlock:;
- (void)setPerShareParticipantCompletionBlock:;
- (id)perShareParticipantCompletionBlock;
- (id)fetchShareParticipantsCompletionBlock;
- (id)userIdentityLookupInfos;
- (void)setUserIdentityLookupInfos:;
@end
