@interface NSSQLDefaultConnectionManager : NSSQLConnectionManager
- (void)scheduleConnectionsBarrier:;
- (void)dealloc;
- (id)initWithSQLCore:priority:seedConnection:;
- (void)scheduleBarrierBlock:;
- (void)setExclusiveLockingMode:;
- (void)enumerateAvailableConnectionsWithBlock:;
- (BOOL)handleStoreRequest:;
- (void)disconnectAllConnections;
@end
