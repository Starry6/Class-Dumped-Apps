@interface BWCoreImageFilterRenderer : NSObject
@property (nonatomic) BOOL usingDepth;
@property (nonatomic) CIContext renderingQueueContext;
@property (nonatomic) NSString displayName;
@property (nonatomic) s type;
@property (nonatomic) BOOL supportsAnimation;
@property (nonatomic) BOOL adjustsMetadata;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (BOOL)usingDepth;
- (void)dealloc;
- (int)prepareForRenderingWithParameters:inputVideoFormat:inputDepthFormat:;
- (void)renderUsingParameters:inputPixelBuffer:inputSampleBuffer:originalPixelBuffer:processedPixelBuffer:completionHandler:;
- (id)initForRenderingWithDepth:context:portraitRenderQuality:metalCommandQueue:;
- (id)renderingQueueContext;
- (id)displayName;
- (BOOL)supportsAnimation;
- (short)type;
- (void)setRenderingQueueContext:;
- (void)adjustMetadataOfSampleBuffer:;
- (BOOL)adjustsMetadata;
+ (void)prewarmPortraitFilterVersion:semanticStyleFilters:;
+ (id)context:err:;
@end
