@interface CSJExpressRewardedVideoInsertConfiguration : NSObject
@property (nonatomic) CSJNativeExpressRewardedVideoAd originRewardedVideoAd;
@property (nonatomic) NSMutableArray insertNativeAds;
@property (nonatomic) CSJRewardedVideoModel rewardedVideoModel;
@property (nonatomic) CSJAdSlot adSlot;
@property (nonatomic) UIViewController parentVC;
- (id)insertNativeAds;
- (id)adSlot;
- (id)originRewardedVideoAd;
- (id)rewardedVideoModel;
- (void)setAdSlot:;
- (void)setInsertNativeAds:;
- (void)setOriginRewardedVideoAd:;
- (void)setRewardedVideoModel:;
- (void).cxx_destruct;
- (id)parentVC;
- (void)setParentVC:;
@end
