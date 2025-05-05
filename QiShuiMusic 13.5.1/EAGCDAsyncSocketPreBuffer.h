@interface EAGCDAsyncSocketPreBuffer : NSObject
- (void)dealloc;
- (unsigned long long)availableBytes;
- (unsigned long long)availableSpace;
- (void)reset;
- (char *)readBuffer;
- (id)initWithCapacity:;
- (void)ensureCapacityForWrite:;
- (void)getReadBuffer:availableBytes:;
- (void)didRead:;
- (char *)writeBuffer;
- (void)getWriteBuffer:availableSpace:;
- (void)didWrite:;
@end
