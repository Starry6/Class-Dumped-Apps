@interface RTCReportingAVCDeprecatedPeriodic : NSObject
- (void)dealloc;
- (id)initWithSession:;
- (BOOL)unregisterPeriodTaskForModule:;
- (void)startLogTimerWithInterval:reportingMultiplier:category:type:;
- (void)stopLogTimer;
- (BOOL)registerPeriodicTaskForModule:needToUpdate:needToReport:serviceBlock:;
- (void)_myPeriodicTask:type:intervalMultiplier:updateTimeout:;
@end
