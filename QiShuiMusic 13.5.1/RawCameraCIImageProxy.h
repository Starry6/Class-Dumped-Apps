@interface RawCameraCIImageProxy : NSProxy
@property (nonatomic) {shared_ptr<CRawImage>=^{CRawImage}^{__shared_weak_count}} rawImage;
@property (nonatomic) CIImage ciImage;
- (id)methodSignatureForSelector:;
- (void).cxx_destruct;
- (id)forwardingTargetForSelector:;
- (void)forwardInvocation:;
- (id).cxx_construct;
- (id)ciImage;
- (void)setCiImage:;
- (id)proxyedObject;
- (id)initWithRawImage:;
- (id)rawImage;
- (void)setRawImage:;
+ (BOOL)respondsToSelector:;
@end
