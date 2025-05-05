@interface ECTransferUndownloadedActionIMAPReplayer : ECLocalActionReplayer
@property (nonatomic) <ECIMAPLocalActionReplayerDelegate> delegate;
@property (nonatomic) <ECIMAPServerInterface> serverInterface;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)serverInterface;
- (id)replayAction;
- (void)setServerInterface:;
- (BOOL)_moveAllMessages;
- (id)_copyAllMessages:;
- (BOOL)_deleteUIDs:;
- (id)_uidIndexSet;
@end
