@interface MTLRenderPassDepthAttachmentDescriptorInternal : MTLRenderPassDepthAttachmentDescriptor
- (void)setLevel:;
- (id)_descriptorPrivate;
- (id)texture;
- (BOOL)yInvert;
- (id)init;
- (void)dealloc;
- (double)clearDepth;
- (id)resolveTexture;
- (id)formattedDescription:;
- (unsigned long long)level;
- (void)setClearDepth:;
- (unsigned long long)loadAction;
- (void)setSlice:;
- (unsigned long long)resolveDepthPlane;
- (unsigned long long)hash;
- (void)setTexture:;
- (void)setResolveDepthPlane:;
- (void)setDepthResolveFilter:;
- (void)setResolveSlice:;
- (unsigned long long)slice;
- (void)setDepthPlane:;
- (void)setLoadAction:;
- (void)setStoreAction:;
- (unsigned long long)storeActionOptions;
- (id)description;
- (unsigned long long)depthResolveFilter;
- (unsigned long long)resolveSlice;
- (unsigned long long)depthPlane;
- (unsigned long long)storeAction;
- (void)setStoreActionOptions:;
- (void)setResolveTexture:;
- (void)setResolveLevel:;
- (void)setYInvert:;
- (BOOL)isEqual:;
- (unsigned long long)resolveLevel;
- (id)copyWithZone:;
+ (id)attachmentDescriptor;
@end
