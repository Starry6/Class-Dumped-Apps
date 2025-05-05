@interface ICUnfairLock : NSObject
- (id)init;
- (void)lockWithBlock:;
- (void)unlock;
- (void)lock;
@end
