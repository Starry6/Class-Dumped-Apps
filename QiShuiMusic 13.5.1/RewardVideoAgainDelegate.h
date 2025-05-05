@interface RewardVideoAgainDelegate : NSObject
@property (nonatomic) ABUCsjRewardedVideoAdapter adapter;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)nativeExpressRewardedVideoAdCallback:withType:;
- (void)nativeExpressRewardedVideoAdDidClick:;
- (void)nativeExpressRewardedVideoAdDidClickSkip:;
- (void)nativeExpressRewardedVideoAdDidClose:;
- (void)nativeExpressRewardedVideoAdDidPlayFinish:didFailWithError:;
- (void)nativeExpressRewardedVideoAdDidVisible:;
- (void)nativeExpressRewardedVideoAdServerRewardDidSucceed:verify:;
- (void)nativeExpressRewardedVideoAdWillClose:;
- (void)nativeExpressRewardedVideoAdWillVisible:;
- (id)initWithAdapter:;
- (id)adapter;
- (void).cxx_destruct;
- (void)setAdapter:;
@end
