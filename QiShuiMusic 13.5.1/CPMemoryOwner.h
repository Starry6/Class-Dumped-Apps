@interface CPMemoryOwner : NSObject
- (void)dealloc;
- (void)dispose;
- (void)finalize;
- (id)initWithAllocatedMemory:;
@end
