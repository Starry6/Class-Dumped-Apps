@interface MTLIOAccelIndirectArgumentEncoder : _MTLIndirectArgumentEncoder
@property (nonatomic) Q encodedLength;
- (void)setBuffer:offset:atIndex:;
- (void)setVisibleFunctionTables:withBufferRange:;
- (void)setVisibleFunctionTable:atBufferIndex:;
- (void)setIntersectionFunctionTable:atBufferIndex:;
- (void)setIntersectionFunctionTables:withBufferRange:;
- (void)setBuffers:offsets:withRange:;
- (void)setTexture:atIndex:;
- (void)setTextures:withRange:;
- (void)setSamplerState:atIndex:;
- (void)setSamplerStates:withRange:;
- (unsigned long long)encodedLength;
- (id)constantDataAtIndex:;
- (void)setIndirectCommandBuffer:atIndex:;
- (void)setIndirectCommandBuffers:withRange:;
- (void)setVisibleFunctionTable:atIndex:;
- (void)setVisibleFunctionTables:withRange:;
- (void)setIntersectionFunctionTable:atIndex:;
- (void)setIntersectionFunctionTables:withRange:;
- (void)setIndirectArgumentBuffer:offset:;
@end
