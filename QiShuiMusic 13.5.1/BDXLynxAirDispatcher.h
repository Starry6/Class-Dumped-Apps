@interface BDXLynxAirDispatcher : NSObject
@property (nonatomic) BDXLynxAirScheduler scheduler;
@property (nonatomic) BDXLynxAirDataCenter dataCenter;
- (void)dispatchAirAction:fromLynxView:;
- (void)_executeElementAction:fromLynxView:;
- (id)dataCenter;
- (void)executeLifecycleAction:fromLynxView:;
- (void)executeTapAction:fromLynxView:;
- (id)metaDependency;
- (void)setDataCenter:;
- (id)init;
- (void)setScheduler:;
- (id)scheduler;
- (void).cxx_destruct;
@end
