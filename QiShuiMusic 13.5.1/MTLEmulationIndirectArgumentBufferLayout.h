@interface MTLEmulationIndirectArgumentBufferLayout : _MTLIndirectArgumentBufferLayout
@property (nonatomic) Q stride;
- (void)dealloc;
- (unsigned long long)stride;
- (unsigned int)hashValue;
- (unsigned long long)alignment;
- (unsigned long long)encodedLength;
- (id)virtualAddressForBufferAtIndex:inIndirectArgumentBuffer:atOffset:;
- (unsigned long long)uniqueIdentifierForTextureAtIndex:inIndirectArgumentBuffer:atOffset:;
- (unsigned long long)uniqueIdentifierForSamplerAtIndex:inIndirectArgumentBuffer:atOffset:;
- (unsigned long long)uniqueIdentifierForRenderPipelineAtIndex:inIndirectArgumentBuffer:atOffset:;
- (unsigned long long)uniqueIdentifierForComputePipelineAtIndex:inIndirectArgumentBuffer:atOffset:;
- (BOOL)bufferLayoutMatchesFrontEndLayout;
- (unsigned int)hashOffset;
- (unsigned int)hashMask;
- (unsigned int)hashSignature;
- (unsigned long long)constantOffsetAtIndex:;
- (id)initWithStructType:;
- (unsigned long long)offsetForBuffer:;
- (unsigned long long)offsetForTexture:;
- (unsigned long long)offsetForSampler:;
- (unsigned long long)offsetForConstant:;
- (unsigned long long)offsetForVisibleFunctionTable:;
- (unsigned long long)offsetForIntersectionFunctionTable:;
- (unsigned long long)offsetForPrimitiveAccelerationStructure:;
- (unsigned long long)offsetForInstanceAccelerationStructure:;
@end
