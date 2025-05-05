@interface CSJExpressRewardedVideoInsertAd : NSObject
@property (nonatomic) CSJRewardedVideoModel rewardedVideoModel;
@property (nonatomic) CSJNativeAd nativeAd;
@property (nonatomic) CSJNativeExpressRewardedVideoAd rewardAd;
- (id)initWithRewardedVideoModel:insertAd:;
- (void)loadInsertAdWithDelegate:;
- (id)nativeAd;
- (id)rewardAd;
- (id)rewardedVideoModel;
- (void)setNativeAd:;
- (void)setRewardAd:;
- (void)setRewardedVideoModel:;
- (BOOL)showAdFromRootViewController:;
- (void).cxx_destruct;
@end
