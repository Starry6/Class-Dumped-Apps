@interface NSMultiReadUniWriteLock : NSObject
- (void)performReadingBlock:;
- (void)performWritingBlock:;
- (id)init;
- (void)dealloc;
- (void)setName:;
- (void)unlock;
- (void)lock;
- (id)description;
- (id)name;
- (void)lockForReading;
- (BOOL)tryLockForReading;
- (BOOL)lockForReadingBeforeDate:;
- (void)lockForWriting;
- (BOOL)tryLockForWriting;
- (BOOL)lockForWritingBeforeDate:;
+ (id)allocWithZone:;
@end
