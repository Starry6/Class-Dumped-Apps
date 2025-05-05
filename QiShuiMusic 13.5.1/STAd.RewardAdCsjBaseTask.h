@interface STAd.RewardAdCsjBaseTask : NSObject
- (void)nativeExpressRewardedVideoAd:didFailWithError:;
- (void)nativeExpressRewardedVideoAdCallback:withType:;
- (void)nativeExpressRewardedVideoAdDidClick:;
- (void)nativeExpressRewardedVideoAdDidClickSkip:;
- (void)nativeExpressRewardedVideoAdDidClose:;
- (void)nativeExpressRewardedVideoAdDidDownLoadVideo:;
- (void)nativeExpressRewardedVideoAdDidLoad:;
- (void)nativeExpressRewardedVideoAdServerRewardDidFail:error:;
- (void)nativeExpressRewardedVideoAdServerRewardDidSucceed:verify:;
- (void)nativeExpressRewardedVideoAdViewRenderFail:error:;
- (id)init;
- (void).cxx_destruct;
@end
