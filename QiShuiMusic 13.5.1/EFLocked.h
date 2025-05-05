@interface EFLocked : NSObject
@property (nonatomic) ^{os_unfair_lock_s=I} unfairLockForTesting;
- (void)setObject:;
- (void)performWhileLocked:;
- (id)unfairLockForTesting;
- (id)debugDescription;
- (id)initWithObject:;
- (id)replaceObject:;
- (id)getObject;
- (void).cxx_destruct;
- (id)description;
@end
