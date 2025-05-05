@interface CMPedometerProxy : NSObject
- (void)_stopPedometerEventUpdates;
- (id)init;
- (void)dealloc;
- (void)_handleQueryResponse:onQueue:withHandler:;
- (void)_subscribeToCumulativePedometerUpdates:;
- (id)_strideCalibrationDump;
- (void)_queryPedometerDataSinceDataRecord:withHandler:shouldStartUpdates:;
- (void)_stopPedometerUpdates;
- (void)_internalQueryPedometerDataFromDate:toDate:onQueue:withHandler:;
- (void)_startPedometerUpdatesFromDate:withHandler:;
- (void)_teardown;
- (void)_startPedometerEventUpdatesWithHandler:;
- (void)_handleRecordQueryResponse:withHandler:shouldStartUpdates:;
- (void)_queryPedometerCalibrationBinsWithHandler:forType:forRemote:;
- (void)_queryPedometerDataFromDate:toDate:withHandler:;
- (void)_startPedometerUpdatesSinceDataRecord:withHandler:;
@end
