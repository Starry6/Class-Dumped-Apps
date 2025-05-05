@interface IESLiveInterativeTimeOutManager : NSObject
@property (nonatomic) IESLiveInterativeTimeOutConfig config;
@property (nonatomic) IESLiveCountTimer timeoutTimer;
@property (nonatomic) NSMutableDictionary uidToCountDown;
@property (nonatomic) <IESLiveInterativeTimeOutDelegate> delegate;
- (void)addTimeoutWithKey:onInvite:;
- (BOOL)containWithKey:onInvite:;
- (id)itemWithKey:;
- (void)removeTimerWithKey:;
- (void)removeTimerWithKeys:;
- (void)setUidToCountDown:;
- (void)startInviteTimer;
- (void)timeOutWithUid:onInvite:;
- (id)uidToCountDown;
- (void)dealloc;
- (void)setConfig:;
- (id)initWithConfig:;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (id)config;
- (id)timeoutTimer;
- (void)setTimeoutTimer:;
@end
