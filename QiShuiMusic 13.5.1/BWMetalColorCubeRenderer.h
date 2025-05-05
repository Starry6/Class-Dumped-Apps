@interface BWMetalColorCubeRenderer : NSObject
@property (nonatomic) NSString displayName;
@property (nonatomic) s type;
@property (nonatomic) BOOL supportsAnimation;
@property (nonatomic) BOOL adjustsMetadata;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (int)prepareForRenderingWithParameters:inputVideoFormat:inputDepthFormat:;
- (void)renderUsingParameters:inputPixelBuffer:inputSampleBuffer:originalPixelBuffer:processedPixelBuffer:completionHandler:;
- (id)displayName;
- (BOOL)supportsAnimation;
- (short)type;
- (void)adjustMetadataOfSampleBuffer:;
- (BOOL)adjustsMetadata;
- (id)initWithMetalCommandQueue:mixInGammaDomain:;
+ (id)bundle;
@end
