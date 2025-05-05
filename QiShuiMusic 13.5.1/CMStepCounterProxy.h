@interface CMStepCounterProxy : NSObject
- (id)init;
- (void)dealloc;
- (void)_handleQueryResponse:onQueue:withHandler:;
- (void)_teardown;
- (void)_queryStepCountStartingFromInternal:to:toQueue:withHandler:;
- (void)_startStepCountingUpdatesToQueue:updateOn:withHandler:;
@end
