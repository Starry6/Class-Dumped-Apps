@interface CSJGCDAsyncSocketPreBuffer : NSObject
- (void)dealloc;
- (unsigned long long)availableBytes;
- (unsigned long long)availableSpace;
- (void)reset;
- (char *)readBuffer;
- (id)initWithCapacity:;
- (void)ensureCapacityForWrite:;
- (void)didRead:;
- (char *)writeBuffer;
- (void)didWrite:;
@end
