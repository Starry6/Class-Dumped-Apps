@interface NSPurgeableData : NSMutableData
- (id)init;
- (void)dealloc;
- (BOOL)isContentDiscarded;
- (id)bytes;
- (void)_destroyMemory;
- (void)endContentAccess;
- (id)initWithBytes:length:copy:deallocator:;
- (void)discardContentIfPossible;
- (id)description;
- (unsigned long long)length;
- (BOOL)beginContentAccess;
- (void)setLength:;
- (id)mutableBytes;
- (id)initWithCapacity:;
@end
