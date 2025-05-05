@interface SCNMTLBufferAllocator : NSObject
@property (nonatomic) Q bufferSize;
@property (nonatomic) Q elementSize;
- (void)dealloc;
- (unsigned long long)elementSize;
- (unsigned long long)bufferSize;
- (id)initWithDevice:fixedSizeElement:buffersize:name:;
- (id)_newSubBuffer;
- (id)newSubBufferWithBytes:length:renderContext:;
@end
