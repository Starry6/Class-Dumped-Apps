@interface AWEAdvertisementRevisitImpl : NSObject
@property (nonatomic) AWEBannerRevisitView bannerView;
@property (nonatomic) AWEInterstitialRevisitView interstitialView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)bdp_getSettings:;
- (void)eventWithName:params:uniqueID:;
- (id)getParentView:;
- (void)setInterstitialView:;
- (id)interstitialView;
- (BOOL)bdp_isBannerRevisitView:;
- (id)bdp_createBannerRevisitView:actionBlk:;
- (void)bdp_showBannerRevisitView:completion:;
- (void)bdp_preloadInterstitialLottie;
- (id)bdp_showInterstitialRevisitView:actionBlk:;
- (void)dealloc;
- (void).cxx_destruct;
- (id)bannerView;
- (void)setBannerView:;
+ (id)sharedPlugin;
+ (id)getSettings:;
@end
