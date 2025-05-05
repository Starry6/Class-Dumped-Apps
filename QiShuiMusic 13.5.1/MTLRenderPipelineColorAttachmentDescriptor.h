@interface MTLRenderPipelineColorAttachmentDescriptor : NSObject
@property (nonatomic) Q pixelFormat;
@property (nonatomic) BOOL blendingEnabled;
@property (nonatomic) Q sourceRGBBlendFactor;
@property (nonatomic) Q destinationRGBBlendFactor;
@property (nonatomic) Q rgbBlendOperation;
@property (nonatomic) Q sourceAlphaBlendFactor;
@property (nonatomic) Q destinationAlphaBlendFactor;
@property (nonatomic) Q alphaBlendOperation;
@property (nonatomic) Q writeMask;
- (id)copyWithZone:;
+ (id)allocWithZone:;
+ (id)alloc;
@end
