@interface VERecursiveMutex : NSObject
- (int)trylock;
- (id)init;
- (void)dealloc;
- (int)unlock;
- (int)lock;
@end
