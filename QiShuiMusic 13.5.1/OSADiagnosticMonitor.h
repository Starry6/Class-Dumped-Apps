@interface OSADiagnosticMonitor : NSObject
- (id)init;
- (void).cxx_destruct;
- (void)addEventObserver:forTypes:;
- (void)removeEventObserver:;
- (void)addWriteObserver:forTypes:;
- (void)removeWriteObserver:;
- (void)q_addEventObserver:forTypes:;
- (void)q_removeEventObserver:andComputeObservedTypes:;
- (void)q_addWriteObserver:forTypes:;
- (void)q_removeWriteObserver:andComputeObservedTypes:;
- (void)q_computeEventObserverTypes;
- (void)q_computeWriteObserverTypes;
- (void)q_registerForEventTypes;
- (void)q_registerForWriteTypes;
- (void)receivedLogEvent:;
- (void)willWriteLog:;
- (void)didWriteLog:;
- (id)q_serverConnection;
- (void)q_teardownServerConnectionIfNoMoreObservers;
+ (id)sharedMonitor;
@end
