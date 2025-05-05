@interface IDSDaemonRequestTimer : NSObject
- (id)invalidateTimeoutAndReturnHandlerForRequestID:;
- (id)init;
- (void)_handleSystemTimerFired:;
- (void)dealloc;
- (id)invalidateTimeoutsAndReturnHandlersForAllRequests;
- (void)_accessRequestContextMapInCriticalSectionWithBlock:;
- (id)_criticalInvalidateTimeoutAndReturnHandlerForRequestID:;
- (long long)inFlightRequestCount;
- (void).cxx_destruct;
- (id)_criticalFindRequestContextWithResponseHandler:;
- (id)scheduleTimeoutWithResponseHandler:timeoutInterval:timeoutBlock:;
- (void)_criticalInvokeTimeoutBlockForRequestID:;
@end
