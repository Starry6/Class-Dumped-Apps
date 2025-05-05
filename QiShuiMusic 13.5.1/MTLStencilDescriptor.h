@interface MTLStencilDescriptor : NSObject
@property (nonatomic) r^{MTLStencilDescriptorPrivate=QQQQII} stencilPrivate;
@property (nonatomic) Q stencilCompareFunction;
@property (nonatomic) Q stencilFailureOperation;
@property (nonatomic) Q depthFailureOperation;
@property (nonatomic) Q depthStencilPassOperation;
@property (nonatomic) I readMask;
@property (nonatomic) I writeMask;
- (id)copyWithZone:;
+ (id)allocWithZone:;
+ (id)alloc;
@end
