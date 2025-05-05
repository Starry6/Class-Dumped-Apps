@interface ECTransferActionIMAPReplayer : ECTransferActionReplayer
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <ECIMAPLocalActionReplayerDelegate> delegate;
@property (nonatomic) <ECIMAPServerInterface> serverInterface;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (BOOL)isRecoverableError:;
- (id)serverInterface;
- (void)setServerInterface:;
- (id)fetchBodyDataForRemoteID:mailboxURL:;
- (BOOL)downloadFailed;
- (id)copyItems:destinationMailboxURL:;
- (id)moveItems:destinationMailboxURL:;
- (id)appendItem:mailboxURL:;
- (BOOL)deleteSourceMessagesFromTransferItems:;
- (id)_transferItems:destinationMailboxURL:isMove:;
@end
