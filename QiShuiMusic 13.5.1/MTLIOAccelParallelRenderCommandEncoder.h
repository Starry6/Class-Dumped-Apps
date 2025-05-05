@interface MTLIOAccelParallelRenderCommandEncoder : _MTLParallelRenderCommandEncoder
- (void)pushDebugGroup:;
- (unsigned long long)getType;
- (void)setLabel:;
- (BOOL)isMemorylessRender;
- (void)popDebugGroup;
- (void)endEncoding;
- (id)initWithCommandBuffer:renderPassDescriptor:;
@end
