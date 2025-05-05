@interface NSSQLConnectionManager : NSObject
- (void)scheduleConnectionsBarrier:;
- (void)dealloc;
- (id)initWithSQLCore:priority:seedConnection:;
- (void)scheduleBarrierBlock:;
- (void)setExclusiveLockingMode:;
- (id)sqlCore;
- (BOOL)handleStoreRequest:;
- (void)disconnectAllConnections;
- (id)initWithSQLCore:seedConnection:;
@end
