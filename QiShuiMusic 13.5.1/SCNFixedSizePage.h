@interface SCNFixedSizePage : NSObject
@property (nonatomic) <MTLBuffer> buffer;
- (BOOL)isFull;
- (void)dealloc;
- (id)buffer;
- (id)initWithBuffer:elementSize:;
- (BOOL)hasFreeElementsLeft;
- (unsigned long long)_allocateElement;
- (void)deallocateElementAtOffset:;
- (id)newSubBufferForAllocator:;
@end
