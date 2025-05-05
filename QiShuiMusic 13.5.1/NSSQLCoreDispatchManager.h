@interface NSSQLCoreDispatchManager : NSObject
- (void)dealloc;
- (void)scheduleBarrierBlock:;
- (void)setExclusiveLockingMode:;
- (id)initWithSQLCore:seedConnection:;
@end
