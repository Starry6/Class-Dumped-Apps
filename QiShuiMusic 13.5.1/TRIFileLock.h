@interface TRIFileLock : NSObject
+ (int)_lockingFlagsFromFileLockMode:;
+ (id)acquireLockOnPath:fileLockMode:blocking:andRunBlock:;
@end
