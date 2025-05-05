@interface CMIExternalMemoryResource : NSObject
@property (nonatomic) FigMetalAllocatorBackend allocatorBackend;
- (void).cxx_destruct;
- (id)allocatorBackend;
- (void)setAllocatorBackend:;
@end
