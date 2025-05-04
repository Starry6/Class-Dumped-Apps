@interface AWEECommerceUploadViewModel : NSObject
@property (nonatomic) RACSubject commerceViewDidAppearSubject;
@property (nonatomic) RACSubject commerceCameraStartRenderSubject;
@property (nonatomic) RACSignal commerceViewDidAppearSignal;
@property (nonatomic) RACSignal commerceCameraStartRenderSignal;
- (void)sendCommerceViewDidAppearSignal;
- (id)commerceCameraStartRenderSignal;
- (id)commerceViewDidAppearSignal;
- (void)sendCommerceCameraStartRenderSignal;
- (id)commerceViewDidAppearSubject;
- (id)commerceCameraStartRenderSubject;
- (void)setCommerceViewDidAppearSignal:;
- (void)setCommerceCameraStartRenderSignal:;
- (void)setCommerceViewDidAppearSubject:;
- (void)setCommerceCameraStartRenderSubject:;
- (void)dealloc;
- (void).cxx_destruct;
@end
