@interface GMNativeExpressFullscreenVideoAd : GMBaseConversionAd
@property (nonatomic) ABUInterstitialProAd intersitiialProAd;
@property (nonatomic) ABUFullscreenVideoAd fullscreenVideoAd;
@property (nonatomic) <BUMNativeExpressFullscreenVideoAdDelegate> delegate;
@property (nonatomic) BURewardedVideoModel rewardModel;
@property (nonatomic) BOOL isReady;
@property (nonatomic) BOOL isLoading;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getShowEcpmInfo;
- (void)setRewardModel:;
- (void)addParam:withKey:;
- (id)cacheRitList;
- (id)fullscreenVideoAd;
- (void)fullscreenVideoAd:didFailWithError:;
- (void)fullscreenVideoAd:didPlayFinishWithError:;
- (void)fullscreenVideoAdDidClick:;
- (void)fullscreenVideoAdDidClose:;
- (void)fullscreenVideoAdDidDownLoadVideo:;
- (void)fullscreenVideoAdDidLoad:;
- (void)fullscreenVideoAdDidShowFailed:error:;
- (void)fullscreenVideoAdDidSkip:;
- (void)fullscreenVideoAdDidVisible:;
- (void)fullscreenVideoAdServerRewardDidSucceed:rewardInfo:verify:;
- (void)fullscreenVideoAdWillClose:;
- (void)fullscreenVideoAdWillDismissFullScreenModel:interactionType:;
- (void)fullscreenVideoAdWillPresentFullScreenModal:;
- (void)fullscreenVideoAdWillVisible:;
- (id)getABUxxxAd;
- (id)getAdCreativeToken;
- (id)getAdLoadInfoList;
- (id)getCurrentBestEcpmInfo;
- (double)getExpireTimestamp;
- (id)getMediaExtraInfo;
- (id)intersitiialProAd;
- (void)interstitialProAd:didFailWithError:;
- (void)interstitialProAdDidClick:;
- (void)interstitialProAdDidClose:;
- (void)interstitialProAdDidDownLoadVideo:;
- (void)interstitialProAdDidLoad:;
- (void)interstitialProAdDidPlayFinish:didFailWithError:;
- (void)interstitialProAdDidShowFailed:error:;
- (void)interstitialProAdDidSkip:;
- (void)interstitialProAdDidVisible:;
- (void)interstitialProAdServerRewardDidSucceed:rewardInfo:verify:;
- (void)interstitialProAdViewRenderFail:error:;
- (void)interstitialProAdWillClose:;
- (void)interstitialProAdWillDismissFullScreenModel:interactionType:;
- (void)interstitialProAdWillPresentFullScreenModal:;
- (void)interstitialProAdWillVisible:;
- (void)loadAdData;
- (void)loadAdDataWithMediaSlotConfigIDs:sign:;
- (BOOL)materialMetaIsFromPreload;
- (id)mediaExt;
- (id)mediation;
- (id)multiBiddingEcpmInfos;
- (id)rewardModel;
- (void)setFullscreenVideoAd:;
- (void)setIntersitiialProAd:;
- (BOOL)showAdFromRootViewController:;
- (BOOL)showAdFromRootViewController:ritSceneDescribe:;
- (id)waterfallFillFailMessages;
- (BOOL)isLoading;
- (void)setDelegate:;
- (BOOL)isReady;
- (id)initWithSlot:;
- (id)delegate;
- (void).cxx_destruct;
- (id)initWithSlotID:;
- (double)expireTimestamp;
@end
