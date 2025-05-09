@interface ABURewardAgainManager : NSObject
@property (nonatomic) ABURewardedVideoAd rewardAgainRewardedVideoAd;
@property (nonatomic) BOOL isLoadFailShowRewardAgain;
@property (nonatomic) ABURewardedVideoAd originalRewardedVideoAd;
@property (nonatomic) UIViewController showViewController;
@property (nonatomic) <ABURewardedVideoAdDelegate> rewardPlayAgainDelegate;
@property (nonatomic) <ABURewardedVideoAdDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)canShowGMRewardAgainWithRewardAd:isRewardVerify:isShow:;
- (void)dismissRewardedAgainAdView;
- (id)initWithOriginRewardAd:;
- (BOOL)isLoadFailShowRewardAgain;
- (id)originalRewardedVideoAd;
- (id)rewardAgainRewardedVideoAd;
- (id)rewardPlayAgainDelegate;
- (void)rewardedVideoAd:didFailWithError:;
- (void)rewardedVideoAd:didPlayFinishWithError:;
- (void)rewardedVideoAdDidClick:;
- (void)rewardedVideoAdDidClose:;
- (void)rewardedVideoAdDidLoad:;
- (void)rewardedVideoAdDidShowFailed:error:;
- (void)rewardedVideoAdDidSkip:;
- (void)rewardedVideoAdDidVisible:;
- (void)rewardedVideoAdServerRewardDidSucceed:rewardInfo:verify:;
- (void)setIsLoadFailShowRewardAgain:;
- (void)setOriginalRewardedVideoAd:;
- (void)setRewardAgainRewardedVideoAd:;
- (void)setRewardPlayAgainDelegate:;
- (void)setShowViewController:;
- (void)showRewardAgainViewWithRewardAd:withOKBlock:withCancelBlock:;
- (id)showViewController;
- (id)init;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
@end
