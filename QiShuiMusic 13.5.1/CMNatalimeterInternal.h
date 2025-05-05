@interface CMNatalimeterInternal : NSObject
- (id)init;
- (void)dealloc;
- (void)_teardown;
- (void)_queryAbsoluteNatalimetryDataSinceRecord:withHandler:;
- (void)_queryAbsoluteNatalimetryDataSinceDataRecord:withHandler:;
- (void)_handleQueryResponse:withHandler:;
- (void)_startAbsoluteNatalimetryDataUpdatesWithHandler:;
- (void)_stopAbsoluteNatalimetryDataUpdates;
- (unsigned long long)_promptsNeeded;
@end
