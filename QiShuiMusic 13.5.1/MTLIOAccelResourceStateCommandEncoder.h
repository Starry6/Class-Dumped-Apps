@interface MTLIOAccelResourceStateCommandEncoder : MTLIOAccelCommandEncoder
- (unsigned long long)getType;
- (void)updateTextureMappings:mode:regions:mipLevels:slices:numRegions:;
- (void)updateTextureMapping:mode:region:mipLevel:slice:;
- (void)updateTextureMapping:mode:indirectBuffer:indirectBufferOffset:;
- (void)moveTextureMappingsFromTexture:sourceSlice:sourceLevel:sourceOrigin:sourceSize:toTexture:destinationSlice:destinationLevel:destinationOrigin:;
@end
