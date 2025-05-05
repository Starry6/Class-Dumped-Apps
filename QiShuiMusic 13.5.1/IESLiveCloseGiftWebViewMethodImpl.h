@interface IESLiveCloseGiftWebViewMethodImpl : IESLiveCloseGiftWebViewMethod
@property (nonatomic) <IESLiveGiftModule> giftModule;
- (void)callWithParamModel:completionHandler:;
- (id)giftModule;
- (id)p_closeContainer:keepOffline:animate:willClose:completion:;
- (void)p_updateInteractiveGiftGuideStoreIfGuideFinished;
- (void)setGiftModule:;
- (void).cxx_destruct;
@end
