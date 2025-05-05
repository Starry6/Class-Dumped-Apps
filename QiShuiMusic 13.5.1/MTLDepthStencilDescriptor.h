@interface MTLDepthStencilDescriptor : NSObject
@property (nonatomic) r^{MTLDepthStencilDescriptorPrivate=@@QB@} depthStencilPrivate;
@property (nonatomic) Q depthCompareFunction;
@property (nonatomic) BOOL depthWriteEnabled;
@property (nonatomic) MTLStencilDescriptor frontFaceStencil;
@property (nonatomic) MTLStencilDescriptor backFaceStencil;
@property (nonatomic) NSString label;
- (id)copyWithZone:;
+ (id)allocWithZone:;
+ (id)alloc;
@end
