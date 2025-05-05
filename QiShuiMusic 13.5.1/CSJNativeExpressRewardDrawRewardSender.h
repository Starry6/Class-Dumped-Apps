@interface CSJNativeExpressRewardDrawRewardSender : NSObject
@property (nonatomic) <CSJNativeExpressVideoAdDelegate><CSJVideoAdDelegate><CSJInterstitialAdDelegate> rewardedVideoAd;
@property (nonatomic) CSJMaterialMeta materialMeta;
@property (nonatomic) NSString playStartTS;
- (id)rewardedVideoAd;
- (void)setPlayStartTS:;
- (void)_updateRewardWithType:propose:;
- (id)initWithRewardedVideoAd:;
- (id)materialMeta;
- (id)playStartTS;
- (void)safe_videoAdServerRewardDidFailWithError:;
- (void)safe_videoAdServerRewardDidSucceedVerify:;
- (void)sendVerifiedRewardWithDuration:type:meta:settingModel:playStartTS:resultBlock:;
- (void)setMaterialMeta:;
- (void)setRewardedVideoAd:;
- (void)verifyRewardWithDurationTime:type:success:fail:;
- (void).cxx_destruct;
@end
