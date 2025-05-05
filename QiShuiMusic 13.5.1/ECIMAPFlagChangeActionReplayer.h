@interface ECIMAPFlagChangeActionReplayer : ECLocalActionReplayer
@property (nonatomic) <ECIMAPLocalActionReplayerDelegate> delegate;
@property (nonatomic) <ECIMAPServerInterface> serverInterface;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)serverInterface;
- (id)replayAction;
- (void)setServerInterface:;
@end
