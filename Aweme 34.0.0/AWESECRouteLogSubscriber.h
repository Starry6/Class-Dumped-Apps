@interface AWESECRouteLogSubscriber : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)_handleTrafficEvent:;
- (void)_handleWebSafetyEvent:;
- (void)_handleInternalFinishTrafficEvent:;
- (id)trafficContentWithTrace:;
- (id)resultContentWithEvent:;
- (id)metricsContentWithResult:;
- (id)interruptDescription:;
- (id)init;
- (void).cxx_destruct;
- (void)handleEvent:;
- (id)subscriberId;
@end
