@interface MTLImageBlockArgument : MTLBindingInternal
- (void)dealloc;
- (id)initWithName:type:access:isActive:index:kind:dataSize:masterStructMembers:aliasImplicitImageBlock:aliasImplicitImageBlockRenderTarget:;
- (id)imageBlockMasterStructMembers;
- (BOOL)aliasImplicitImageBlock;
- (void)setStructType:;
- (unsigned long long)aliasImplicitImageBlockRenderTarget;
- (unsigned long long)imageBlockKind;
- (unsigned long long)imageBlockDataSize;
@end
