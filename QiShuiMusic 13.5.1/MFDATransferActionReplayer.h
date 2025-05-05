@interface MFDATransferActionReplayer : ECTransferActionReplayer
@property (nonatomic) MFDAMessageStore store;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setStore:;
- (void).cxx_destruct;
- (id)store;
- (BOOL)isRecoverableError:;
- (id)fetchBodyDataForRemoteID:mailboxURL:;
- (BOOL)downloadFailed;
- (id)copyItems:destinationMailboxURL:;
- (id)moveItems:destinationMailboxURL:;
- (id)appendItem:mailboxURL:;
- (BOOL)deleteSourceMessagesFromTransferItems:;
- (id)replayActionUsingStore:;
@end
