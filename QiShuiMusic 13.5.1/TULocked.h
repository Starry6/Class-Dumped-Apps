@interface TULocked : NSObject
- (void)setObject:;
- (void)performWhileLocked:;
- (id)unfairLockForTesting;
- (id)debugDescription;
- (id)initWithObject:;
- (void).cxx_destruct;
- (id)object;
- (id)description;
@end
