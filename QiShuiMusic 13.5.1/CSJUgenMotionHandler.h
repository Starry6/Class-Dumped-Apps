@interface CSJUgenMotionHandler : UgenMotionHandler
@property (nonatomic) CSJTwistManager twistManager;
- (void)setTwistManager:;
- (void)startShakeUpdates:dataSource:key:repeat:updatesWithHandler:;
- (void)startTwistUpdates:dataSource:key:repeat:updatesWithHandler:;
- (void)stopShakeObserver:withKey:;
- (void)stopTwistObserver:withKey:;
- (id)twistManager;
- (void).cxx_destruct;
@end
