@interface CalDatabaseWriteLock : NSObject
- (id)init;
- (void)unlock;
- (void)lock;
- (void)performWithWriteLock:;
+ (id)writeLockForDatabasePath:;
+ (id)canonicalizePath:;
@end
