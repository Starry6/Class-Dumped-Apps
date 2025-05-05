@interface CTStewieStateMonitor : NSObject
- (id)initWithDelegate:queue:;
- (id)stateFromPath:;
- (void)dealloc;
- (id)getState;
- (BOOL)start;
- (void).cxx_destruct;
- (BOOL)startWithEndpoint:parameters:;
@end
