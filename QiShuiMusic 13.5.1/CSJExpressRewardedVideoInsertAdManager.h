@interface CSJExpressRewardedVideoInsertAdManager : NSObject
@property (nonatomic) CSJExpressRewardedVideoInsertAd curInsertAd;
@property (nonatomic) CSJExpressRewardedVideoInsertConfiguration configuration;
@property (nonatomic) BOOL working;
@property (nonatomic) CSJExpressRewardedVideoInsertAd prepareInsertAd;
@property (nonatomic) BUTimer timer;
@property (nonatomic) CSJRewardedAgainLoadingView loadView;
@property (nonatomic) BOOL isMute;
@property (nonatomic) BOOL rewardedVideoDidPlayFinishSendStatus;
@property (nonatomic) BOOL stopInsert;
@property (nonatomic) double duration;
@property (nonatomic) q rewardSendLeftTime;
@property (nonatomic) q toastRewardSendLeftTime;
@property (nonatomic) q curInsertAdIndex;
@property (nonatomic) q insertAdTotalwatchTime;
@property (nonatomic) @? insertSuccess;
@property (nonatomic) @? insertFailed;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)forceStopInsert;
- (void)p_applicationDidEnterBackground;
- (void)p_tick:;
- (id)prepareInsertAd;
- (void)setCurInsertAd:;
- (BOOL)working;
- (id)curInsertAd;
- (long long)curInsertAdIndex;
- (long long)insertAdTotalwatchTime;
- (void)insertAdWithSuccess:failure:;
- (id)insertFailed;
- (id)insertSuccess;
- (BOOL)muteState;
- (void)nativeExpressRewardedVideoAd:didFailWithError:;
- (void)nativeExpressRewardedVideoAd:rewardAgainConfiguration:;
- (void)nativeExpressRewardedVideoAdDidClick:;
- (void)nativeExpressRewardedVideoAdDidClickSkip:;
- (void)nativeExpressRewardedVideoAdDidCloseOtherController:interactionType:;
- (void)nativeExpressRewardedVideoAdDidLoad:;
- (void)nativeExpressRewardedVideoAdDidPlayFinish:didFailWithError:;
- (void)nativeExpressRewardedVideoAdDidVisible:;
- (void)nativeExpressRewardedVideoAdServerRewardDidFail:error:;
- (void)nativeExpressRewardedVideoAdServerRewardDidSucceed:verify:;
- (void)nativeExpressRewardedVideoAdViewRenderFail:error:;
- (void)nativeExpressRewardedVideoAdViewRenderSuccess:;
- (void)p_applicationWillEnterForeground;
- (BOOL)p_curIsRewardNeedClick;
- (BOOL)p_isInInsertTime;
- (void)p_pop;
- (void)p_popAll;
- (void)p_updateInserAdTotalWatchedTime:;
- (void)prepareForInsertAd;
- (long long)rewardSendLeftTime;
- (BOOL)rewardedVideoDidPlayFinishSendStatus;
- (void)setCurInsertAdIndex:;
- (void)setInsertAdTotalwatchTime:;
- (void)setInsertFailed:;
- (void)setInsertSuccess:;
- (void)setIsMute:;
- (void)setLoadView:;
- (void)setPrepareInsertAd:;
- (void)setRewardSendLeftTime:;
- (void)setRewardedVideoDidPlayFinishSendStatus:;
- (void)setStopInsert:;
- (void)setToastRewardSendLeftTime:;
- (void)setWorking:;
- (BOOL)stopInsert;
- (long long)toastRewardSendLeftTime;
- (void)updateMuteState:;
- (void)updateRewardedVideoDidPlayFinishSendStatus:;
- (void)setConfiguration:;
- (void)setDuration:;
- (void)setTimer:;
- (void)clear;
- (id)configuration;
- (void).cxx_destruct;
- (id)timer;
- (id)loadView;
- (double)duration;
- (void)startWithConfiguration:;
- (BOOL)isMute;
+ (id)sharedInstance;
@end
