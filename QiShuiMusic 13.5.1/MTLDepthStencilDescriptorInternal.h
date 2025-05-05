@interface MTLDepthStencilDescriptorInternal : MTLDepthStencilDescriptor
@property (nonatomic) r^{MTLDepthStencilDescriptorPrivate=@@QB@} depthStencilPrivate;
- (id)init;
- (void)setDepthWriteEnabled:;
- (void)dealloc;
- (id)formattedDescription:;
- (void)setBackFaceStencil:;
- (BOOL)isDepthWriteEnabled;
- (void)setLabel:;
- (unsigned long long)hash;
- (id)label;
- (unsigned long long)depthCompareFunction;
- (id)frontFaceStencil;
- (id)description;
- (id)depthStencilPrivate;
- (void)setDepthCompareFunction:;
- (id)backFaceStencil;
- (BOOL)isEqual:;
- (void)setFrontFaceStencil:;
- (id)copyWithZone:;
@end
