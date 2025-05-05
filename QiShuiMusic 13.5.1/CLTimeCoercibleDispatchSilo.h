@interface CLTimeCoercibleDispatchSilo : CLDispatchSilo
@property (nonatomic) NSMutableArray timerHolders;
- (id)timerHolders;
- (void)heartBeat:;
- (void)prepareAndRunBlock:;
- (id)newTimer;
- (void)setLatchedAbsoluteTimestamp:;
- (void)afterInterval:async:;
- (void).cxx_destruct;
- (id)initWithIdentifier:;
- (id)initWithUnderlyingQueue:;
@end
