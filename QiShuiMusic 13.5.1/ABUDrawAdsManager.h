@interface ABUDrawAdsManager : ABUBaseAd
@property (nonatomic) Q loadAdCount;
@property (nonatomic) NSHashTable winnerDrawAdViews;
@property (nonatomic) BOOL getExpressAdIfCan;
@property (nonatomic) {CGSize=dd} adSize;
@property (nonatomic) <ABUDrawAdsManagerDelegate> delegate;
@property (nonatomic) UIViewController rootViewController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)destory;
- (void)setLoadAdCount:;
- (id)_convertToViewFromAd:cacheList:;
- (void)_warningAdapterCallbackErrorWithSelector:fromAdapter:andDrawAd:;
- (id)_drawAdViewWithMediatedAd:index:;
- (void)_trackMediaShowDislikeWithDrawAdView:reasons:;
- (void)adCustomTokensInfoDidCollected:andResumeHandler:;
- (void)adLoadDidFailedWithError:;
- (void)adLoadDidSuccess;
- (void)adnAdDidFinishLoad:error:;
- (void)drawAd:didClickWithMediatedAd:;
- (void)drawAd:didCloseWithExpressView:closeReasons:;
- (void)drawAd:didCloseWithMediatedAd:closeReasons:;
- (void)drawAd:didVisibleWithMediatedAd:;
- (void)drawAd:renderFailWithExpressView:andError:;
- (void)drawAd:renderSuccessWithExpressView:;
- (void)drawAd:videoDidClick:;
- (void)drawAd:videoDidPlayFinish:;
- (void)drawAd:videoStateDidChangedWithState:andMediatedAd:;
- (void)drawAd:willDismissFullScreenModalWithMediatedAd:;
- (void)drawAd:willPresentFullScreenModalWithMediatedAd:;
- (BOOL)enablePreloadCache;
- (BOOL)getExpressAdIfCan;
- (id)initWithAdUnitID:adSize:;
- (unsigned long long)loadAdCount;
- (void)loadAdData;
- (void)loadAdDataWithCount:;
- (void)makeSureViewSizeWithView:;
- (unsigned long long)moduleControl;
- (id)preloadAdWithType:;
- (id)reuseIdentifierFactors;
- (void)setAdSize:;
- (void)setGetExpressAdIfCan:;
- (void)setWinnerDrawAdViews:;
- (id)winnerDrawAdViews;
- (void)setRootViewController:;
- (void)dealloc;
- (id)rootViewController;
- (void)setDelegate:;
- (long long)adType;
- (id)delegate;
- (void).cxx_destruct;
- (id)adSize;
- (BOOL)isReady:;
@end
