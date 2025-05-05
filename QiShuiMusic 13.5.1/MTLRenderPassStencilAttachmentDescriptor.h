@interface MTLRenderPassStencilAttachmentDescriptor : MTLRenderPassAttachmentDescriptor
@property (nonatomic) I clearStencil;
@property (nonatomic) Q stencilResolveFilter;
+ (id)allocWithZone:;
+ (id)alloc;
@end
