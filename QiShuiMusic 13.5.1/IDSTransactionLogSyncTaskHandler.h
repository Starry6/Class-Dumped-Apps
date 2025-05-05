@interface IDSTransactionLogSyncTaskHandler : IDSTransactionLogTaskHandler
@property (nonatomic) IDSTransactionLogSyncTask syncTask;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) <IDSTransactionLogTaskHandlerDelegate> delegate;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)_completeWithError:;
- (void)setQueue:;
- (id)queue;
- (void)perform;
- (id)initWithTask:delegate:queue:;
- (void)qPerformWithToken:;
- (void)qIngestMessages:completion:;
- (void)qFetchParticipantsFromDeviceMessges:andGroupsFromGroupMessages:completion:;
- (void)_transactionMessagesFromTransportMessages:withParticipants:groups:accountInfo:completion:;
- (id)_destinationsInMessages:;
- (id)_groupIDsFromMessages:;
- (id)_groupsByGroupIDFromGroups:;
- (id)_participantsByAliasFromParticipants:;
- (id)_transactionMessageFromTransportMessage:groups:participants:accountInfo:;
- (id)_transactionMessageFromTransportMessage:withGroupID:groups:accountInfo:;
- (id)_transactionMessageFromTransportMessage:withParticipants:accountInfo:;
- (id)_transactionMessageFromTransportMessage:withDecryptedPayload:accountInfo:;
- (id)syncTask;
- (void)setSyncTask:;
@end
