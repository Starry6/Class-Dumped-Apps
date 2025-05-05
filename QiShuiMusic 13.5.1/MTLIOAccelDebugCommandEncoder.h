@interface MTLIOAccelDebugCommandEncoder : _MTLDebugCommandEncoder
- (void)dealloc;
- (id)initWithCommandBuffer:;
- (void)kprintfBytes:length:;
- (void)endEncoding;
- (void)IOLogBytes:length:;
- (id)reserveKernelCommandBufferSpace:;
- (void)restartDebugPass;
- (unsigned int)addDebugResourceListInfo:flag:;
- (void)debugBytes:length:output_type:;
- (void)debugResourceBytes:length:output_type:;
- (void)addAPIResource:;
- (void)kprintfResource:length:;
- (void)IOLogResource:length:;
@end
