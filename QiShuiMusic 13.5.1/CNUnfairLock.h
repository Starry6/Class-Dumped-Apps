@interface CNUnfairLock : NSObject
- (id)init;
- (void)assertCurrentThreadIsNotOwner;
- (void)unlock;
- (void)lock;
- (void)assertCurrentThreadIsOwner;
- (BOOL)tryLock;
- (id)description;
@end
