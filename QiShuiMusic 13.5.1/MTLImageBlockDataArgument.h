@interface MTLImageBlockDataArgument : MTLBindingInternal
- (void)dealloc;
- (id)imageBlockMasterStructMembers;
- (BOOL)aliasImplicitImageBlock;
- (void)setStructType:;
- (id)initWithName:type:access:isActive:index:dataSize:masterStructMembers:aliasImplicitImageBlock:aliasImplicitImageBlockRenderTarget:;
- (unsigned long long)aliasImplicitImageBlockRenderTarget;
- (unsigned long long)imageBlockDataSize;
@end
