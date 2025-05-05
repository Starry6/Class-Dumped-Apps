@interface ECGmailLabelChangeReplayer : ECLocalActionReplayer
@property (nonatomic) <ECIMAPLocalActionReplayerDelegate> delegate;
@property (nonatomic) <ECIMAPServerInterface> serverInterface;
- (void).cxx_destruct;
- (id)serverInterface;
- (id)replayAction;
- (void)setServerInterface:;
@end
