@interface ABUDrawAdView : ABUCanvasView
@property (nonatomic) ABUVideoAdReporter videoAdReporter;
@property (nonatomic) BUAdSlot adslot;
@property (nonatomic) <BUMNativeAdDelegate><BUMNativeExpressAdViewDelegate> delegate;
@property (nonatomic) <BUMNativeAdDelegate><BUMNativeExpressAdViewDelegate> incoming_delegate;
@property (nonatomic) BOOL isNativeExpressAdManager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) BOOL isExpressAd;
@property (nonatomic) BUMCanvasView canvasView;
@property (nonatomic) BUMVideoAdReporter videoAdReporter;
@property (nonatomic) BOOL isReady;
@property (nonatomic) NSString adViewID;
@property (nonatomic) UIView expressView;
@property (nonatomic) BOOL isExpressAd;
@property (nonatomic) BOOL alreadyRender;
@property (nonatomic) BOOL isAdViewDidCallShow;
@property (nonatomic) ABUDrawAdsManager adManager;
@property (nonatomic) ABUAdPackage adPackage;
@property (nonatomic) <ABUDrawAdViewDelegate> delegate;
@property (nonatomic) <ABUDrawAdVideoDelegate> videoDelegate;
@property (nonatomic) BOOL hasExpressAdGot;
@property (nonatomic) UIViewController rootViewController;
@property (nonatomic) NSString adViewID;
- (id)callToActionBtn;
- (void)drawAdExpressViewRenderSuccess:;
- (id)getShowEcpmInfo;
- (void)setExpressView:;
- (BOOL)hasExpressAdGot;
- (BOOL)isNativeExpress;
- (void)reSizeMediaView;
- (void)setIsExpressAd:;
- (id)videoAdReporter;
- (id)_nativeAd;
- (id)adLogoView;
- (id)adManager;
- (id)adPackage;
- (void)adViewDidShow;
- (id)adViewID;
- (id)adslot;
- (id)advertiserView;
- (BOOL)alreadyRender;
- (id)biddingToken;
- (id)cacheRitList;
- (double)currentPlayedTime;
- (id)descLabel;
- (id)dislikeBtn;
- (void)drawAdDidBecomeVisible:;
- (void)drawAdDidClick:withView:;
- (void)drawAdDidClosed:closeReason:;
- (void)drawAdExpressViewDidClosed:closeReason:;
- (void)drawAdExpressViewRenderFail:error:;
- (void)drawAdVideo:stateDidChanged:;
- (void)drawAdVideoDidClick:;
- (void)drawAdVideoDidPlayFinish:;
- (void)drawAdView:stateDidChanged:;
- (void)drawAdViewWillDismissFullScreenModal:;
- (void)drawAdViewWillPresentFullScreenModal:;
- (id)expressView;
- (void)expressViewDidFinishRender;
- (id)getAdCreativeToken;
- (id)getAdNetworkPlatformName;
- (id)getAdNetworkRitId;
- (id)getCurrentBestEcpmInfo;
- (id)getMediaExtraInfo;
- (id)getPreEcpm;
- (BOOL)hasSupportActionBtn;
- (id)incoming_delegate;
- (id)initWithAdPackage:;
- (id)initWithExpressView:;
- (BOOL)isAdViewDidCallShow;
- (BOOL)isExpressAd;
- (BOOL)isNativeExpressAdManager;
- (void)loadAdData;
- (void)loss:lossReason:winBidder:;
- (id)mediaExt;
- (id)mediation;
- (id)multiBiddingEcpmInfos;
- (id)nativeExpressAdView;
- (void)registerContainer:withClickableViews:;
- (void)setAdManager:;
- (void)setAdMarkup:;
- (void)setAdPackage:;
- (void)setAdslot:;
- (void)setAlreadyRender:;
- (void)setIncoming_delegate:;
- (void)setIsAdViewDidCallShow:;
- (void)setIsNativeExpressAdManager:;
- (void)setMopubAdMarkUp:;
- (void)unregisterView;
- (BOOL)viewExistForMediatedNativeAd:;
- (void)win:;
- (void)setRootViewController:;
- (void)setFrame:;
- (void)layoutSubviews;
- (id)mediaView;
- (id)rootViewController;
- (BOOL)isMemberOfClass:;
- (void)setDelegate:;
- (void)setDelegate:;
- (BOOL)isReady;
- (id)initWithSlot:;
- (long long)videoDuration;
- (void)hold;
- (id)delegate;
- (id)delegate;
- (void).cxx_destruct;
- (BOOL)isKindOfClass:;
- (id)imageView;
- (id)iconImageView;
- (void)willMoveToSuperview:;
- (id)titleLabel;
- (id)canvasView;
- (void)render;
- (void)setPrice:;
- (id)extraData;
- (void)setVideoDelegate:;
- (id)videoDelegate;
- (id)videoDelegate;
+ (id)nativeAdViewSet;
+ (void)setNativeAdViewSet:;
@end
