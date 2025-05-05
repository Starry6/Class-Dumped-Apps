@interface AVCoreImageFilterCustomVideoCompositor : NSObject
@property (nonatomic) BOOL shouldCancelAllRequests;
@property (nonatomic) NSObject<OS_dispatch_group> filteringRequestsInFlight;
@property (nonatomic) NSDictionary sourcePixelBufferAttributes;
@property (nonatomic) NSDictionary requiredPixelBufferAttributesForRenderContext;
@property (nonatomic) BOOL supportsWideColorSourceFrames;
@property (nonatomic) BOOL supportsHDRSourceFrames;
@property (nonatomic) BOOL canConformColorOfSourceFrames;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (id)sourcePixelBufferAttributes;
- (void)renderContextChanged:;
- (void)startVideoCompositionRequest:;
- (id)requiredPixelBufferAttributesForRenderContext;
- (void)cancelAllPendingVideoCompositionRequests;
- (BOOL)supportsWideColorSourceFrames;
- (BOOL)supportsHDRSourceFrames;
- (void)_willDeallocOrFinalize;
- (id)filteringRequestsInFlight;
- (id)defaultCIContext;
- (BOOL)shouldCancelAllRequests;
- (void)setShouldCancelAllRequests:;
@end
