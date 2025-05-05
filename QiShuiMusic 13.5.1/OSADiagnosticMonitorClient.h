@interface OSADiagnosticMonitorClient : NSObject
- (void)removeObserver:;
- (id)init;
- (void).cxx_destruct;
- (void)addObserver:forTypes:;
- (id)q_shimWrappingObserver:creatingIfAbsent:removingIfPresent:;
+ (id)sharedClient;
@end
