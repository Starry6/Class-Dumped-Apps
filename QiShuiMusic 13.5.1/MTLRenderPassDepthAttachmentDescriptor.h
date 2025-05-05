@interface MTLRenderPassDepthAttachmentDescriptor : MTLRenderPassAttachmentDescriptor
@property (nonatomic) double clearDepth;
@property (nonatomic) Q depthResolveFilter;
+ (id)allocWithZone:;
+ (id)alloc;
@end
