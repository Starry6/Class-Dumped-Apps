@interface AVAsynchronousCIImageFilteringRequestInternal : NSObject
@property (nonatomic) AVAsynchronousVideoCompositionRequest compositingRequest;
@property (nonatomic) @? cancellationTest;
@property (nonatomic) @? defaultCIContextProvider;
@property (nonatomic) @? completionHandler;
@property (nonatomic) CIImage sourceCIImage;
@property (nonatomic) ^{__CVBuffer=} sourcePBuf;
- (void)dealloc;
- (void)setCompletionHandler:;
- (id)completionHandler;
- (void)_willDeallocOrFinalize;
- (id)compositingRequest;
- (void)setCompositingRequest:;
- (id)cancellationTest;
- (void)setCancellationTest:;
- (id)defaultCIContextProvider;
- (void)setDefaultCIContextProvider:;
- (id)sourceCIImage;
- (void)setSourceCIImage:;
- (id)sourcePBuf;
- (void)setSourcePBuf:;
@end
