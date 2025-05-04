@interface AWEPlaySessionEvent : NSObject
- (id)getParams;
- (id)getDiffParamsWithKey:state:;
- (void)updateParamsInState:params:;
- (id)mergeOthersParams:;
- (void)processPlaySessionEvents;
- (void)updateState:;
- (void).cxx_destruct;
- (id)reportMetrics;
@end
