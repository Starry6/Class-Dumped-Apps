@interface TCPBufferPool : NSObject
- (id)init;
- (void)dealloc;
- (char *)getBufferFromPool:;
- (void)returnBufferToPool:;
- (void)monitorBufferPool;
@end
