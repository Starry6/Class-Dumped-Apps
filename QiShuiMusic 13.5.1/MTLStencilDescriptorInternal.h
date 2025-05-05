@interface MTLStencilDescriptorInternal : MTLStencilDescriptor
@property (nonatomic) r^{MTLStencilDescriptorPrivate=QQQQII} stencilPrivate;
- (id)init;
- (id)formattedDescription:;
- (void)setStencilCompareFunction:;
- (void)setStencilFailureOperation:;
- (unsigned int)readMask;
- (unsigned long long)hash;
- (unsigned long long)depthStencilPassOperation;
- (unsigned long long)stencilCompareFunction;
- (void)setDepthStencilPassOperation:;
- (unsigned long long)depthFailureOperation;
- (void)setReadMask:;
- (id)description;
- (void)setWriteMask:;
- (unsigned int)writeMask;
- (void)setDepthFailureOperation:;
- (id)stencilPrivate;
- (BOOL)isEqual:;
- (unsigned long long)stencilFailureOperation;
- (id)copyWithZone:;
@end
