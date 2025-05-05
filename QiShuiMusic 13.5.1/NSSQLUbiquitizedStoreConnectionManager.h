@interface NSSQLUbiquitizedStoreConnectionManager : NSSQLConnectionManager
- (void)scheduleConnectionsBarrier:;
- (void)dealloc;
- (id)initWithSQLCore:priority:seedConnection:;
- (void)scheduleBarrierBlock:;
- (void)setExclusiveLockingMode:;
- (BOOL)handleStoreRequest:;
- (void)disconnectAllConnections;
@end
