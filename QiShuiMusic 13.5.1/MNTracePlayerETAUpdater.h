@interface MNTracePlayerETAUpdater : MNSessionUpdateManager
- (void)playETAUpdate:;
- (void)startUpdateRequestsForRoutes:andNavigationType:;
- (void)resumeUpdateRequests;
- (id)_serverDisplayETAForResponseInfo:;
@end
