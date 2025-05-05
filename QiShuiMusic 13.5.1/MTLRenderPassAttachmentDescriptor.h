@interface MTLRenderPassAttachmentDescriptor : NSObject
@property (nonatomic) <MTLTexture> texture;
@property (nonatomic) Q level;
@property (nonatomic) Q slice;
@property (nonatomic) Q depthPlane;
@property (nonatomic) <MTLTexture> resolveTexture;
@property (nonatomic) Q resolveLevel;
@property (nonatomic) Q resolveSlice;
@property (nonatomic) Q resolveDepthPlane;
@property (nonatomic) Q loadAction;
@property (nonatomic) Q storeAction;
@property (nonatomic) Q storeActionOptions;
- (id)copyWithZone:;
@end
