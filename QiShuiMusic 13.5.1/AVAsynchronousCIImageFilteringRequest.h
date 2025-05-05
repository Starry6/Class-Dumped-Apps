@interface AVAsynchronousCIImageFilteringRequest : NSObject
@property (nonatomic) {CGSize=dd} renderSize;
@property (nonatomic) {?=qiIq} compositionTime;
@property (nonatomic) CIImage sourceImage;
- (void)dealloc;
- (id)renderSize;
- (void)finishWithError:;
- (id)copyWithZone:;
- (id)sourceImage;
- (void)_willDeallocOrFinalize;
- (id)initUsingCompositingRequest:sourceFrame:cancellationTest:defaultCIContextProvider:completionHandler:;
- (id)compositionTime;
- (void)finishWithImage:context:;
@end
