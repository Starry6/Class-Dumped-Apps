@interface MTLIOAccelCommandQueue : _MTLCommandQueue
@property (nonatomic) <MTLDevice> device;
- (void)setCompletionQueue:;
- (void)dealloc;
- (void)setLabel:;
- (id)initWithDevice:descriptor:;
- (unsigned long long)getGPUPriority;
- (BOOL)setBackgroundGPUPriority:;
- (unsigned long long)getBackgroundGPUPriority;
- (BOOL)setGPUPriority:offset:;
- (void)submitCommandBuffers:count:;
- (BOOL)setBackgroundGPUPriority:offset:;
- (BOOL)setGPUPriority:;
- (BOOL)_setGPUPriority:backgroundPriority:;
- (id)device;
@end
