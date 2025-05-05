@interface NSConcreteMutableData : NSMutableData
- (void)replaceBytesInRange:withBytes:;
- (id)init;
- (void)dealloc;
- (void)appendData:;
- (void)increaseLengthBy:;
- (void)appendBytes:length:;
- (BOOL)_providesConcreteBacking;
- (id)bytes;
- (void)resetBytesInRange:;
- (BOOL)_canUseRealloc;
- (id)initWithBytes:length:copy:deallocator:;
- (id)initWithLength:;
- (unsigned long long)length;
- (void)_freeBytes;
- (void)setLength:;
- (id)mutableBytes;
- (id)initWithCapacity:;
@end
