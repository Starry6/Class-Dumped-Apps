@interface STAd.SplashAdCsjTask : NSObject
- (void)onTapSVIPButton;
- (void)splashAdViewControllerDidClose:;
- (void)splashAdDidClick:;
- (void)splashAdDidClose:closeType:;
- (void)splashAdDidShow:;
- (void)splashAdLoadFail:error:;
- (void)splashAdLoadSuccess:;
- (void)splashAdRenderFail:error:;
- (void)splashAdRenderSuccess:;
- (void)splashAdWillShow:;
- (void)splashDidCloseOtherController:interactionType:;
- (void)splashVideoAdDidPlayFinish:didFailWithError:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
@end
