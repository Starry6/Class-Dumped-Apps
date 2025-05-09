@interface BDUGLuckyADRewardVideoManager : NSObject
@property (nonatomic) @? completion;
@property (nonatomic) NSMutableDictionary trackCommonParams;
@property (nonatomic) NSMutableDictionary tokens;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)__cleanData;
- (void)__commonVideoAd:didClickCloseWithInfo:;
- (void)__commonVideoAd:didLoadFailWithError:;
- (void)__commonVideoAdBecomeEffective:rewardIndex:;
- (void)__commonVideoAdDidLoadSuccess:;
- (void)__commonVideoAdMoreRewardDisplayInfo:index:callBack:;
- (id)__doActionFeedbackToast:;
- (void)__handleRewardVideoCloseWithAdVideoModel:;
- (void)createRewardedVideoWithParams:completion:;
- (void)luckyRewardedVideoAd:didClickCloseWithInfo:;
- (void)luckyRewardedVideoAd:didLoadFailWithError:;
- (void)luckyRewardedVideoAdBecomeEffective:;
- (void)luckyRewardedVideoAdDidLoadSuccess:;
- (void)luckyRewardedVideoAdMoreRewardDisplayInfo:callBack:;
- (void)rewardedVideoTrackWithParams:;
- (void)setTrackCommonParams:;
- (id)trackCommonParams;
- (void)videoAd:didClickCloseWithInfo:;
- (void)videoAd:didLoadFailWithError:;
- (void)videoAdBecomeEffective:;
- (void)videoAdDidLoadSuccess:;
- (void)videoAdMoreRewardDisplayInfo:index:callBack:;
- (id)completion;
- (void)setCompletion:;
- (void)setTokens:;
- (void).cxx_destruct;
- (id)tokens;
+ (id)extraServiceProtocols;
+ (id)sharedInstance;
+ (id)serviceProtocol;
@end
