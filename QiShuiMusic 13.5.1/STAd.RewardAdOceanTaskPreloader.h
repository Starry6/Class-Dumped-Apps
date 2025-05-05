@interface STAd.RewardAdOceanTaskPreloader : NSObject
- (void)videoAd:becomeEffectiveWithInfos:index:;
- (void)videoAd:didClickBannerBtnWithInfo:;
- (void)videoAd:didClickCloseWithInfo:;
- (void)videoAd:didLoadFailWithError:;
- (void)videoAd:loadSuccessWithInfos:;
- (void)videoAd:moreRewardDisplayInfoIndex:callBack:;
- (void)videoAdAfterDismissed;
- (id)init;
- (void).cxx_destruct;
@end
