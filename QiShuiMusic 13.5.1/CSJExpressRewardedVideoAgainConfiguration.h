@interface CSJExpressRewardedVideoAgainConfiguration : NSObject
@property (nonatomic) CSJNativeExpressRewardedVideoAd originRewardedVideoAd;
@property (nonatomic) CSJRewardedVideoModel againVideoModel;
@property (nonatomic) CSJAdSlot adSlot;
@property (nonatomic) CSJMaterialMeta materialMeta;
@property (nonatomic) UIView currentView;
@property (nonatomic) UIViewController parentVC;
- (id)againVideoModel;
- (id)adSlot;
- (id)materialMeta;
- (id)originRewardedVideoAd;
- (void)setAdSlot:;
- (void)setAgainVideoModel:;
- (void)setMaterialMeta:;
- (void)setOriginRewardedVideoAd:;
- (void).cxx_destruct;
- (id)currentView;
- (void)setCurrentView:;
- (id)parentVC;
- (void)setParentVC:;
@end
