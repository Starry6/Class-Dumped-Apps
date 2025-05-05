@interface BWDeferredContainerPixelBufferPoolWrapper : NSObject
- (void)signal;
- (void)dealloc;
- (id)initWithVideoFormat:capacity:name:;
- (void)flushToMinimumCapacity:;
@end
