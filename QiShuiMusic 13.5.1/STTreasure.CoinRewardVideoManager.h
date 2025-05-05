@interface STTreasure.CoinRewardVideoManager : NSObject
- (void)videoAd:becomeEffectiveWithInfos:index:;
- (void)videoAd:didClickBannerBtnWithInfo:;
- (void)videoAd:didClickCloseWithInfo:;
- (void)videoAd:didLoadFailWithError:;
- (void)videoAd:loadSuccessWithInfos:;
- (void)videoAd:moreRewardDisplayInfoIndex:callBack:;
- (void)videoAdAfterDismissed;
- (void)createRewardedVideoWithParams:delegate:completion:;
- (id)init;
- (void).cxx_destruct;
+ (void)bindProtocol;
+ (id)serviceProtocol;
@end
