@interface CSJFullScreenInterstitialCoverView : CSJFullScreenInterstitialAdView
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)coverViewClick:areaCategory:clickExtraInfo:;
- (void)coverViewClickAdLogo:;
- (void)coverViewClickClose:;
- (void)coverViewClickDownload:clickExtraInfo:;
- (void)coverViewClickVideo:;
- (id)initWithMaterial:adSlot:imageStyle:;
- (void)interstitialCoverView:videoDidLoadFailWithError:;
- (void)interstitialCoverView:videoStateDidChanged:;
- (void)logoImageViewAction;
- (void)playerDidPlayFinish:;
- (void)playerReadyToPlay:;
- (void)videoAdViewDidClick:;
- (void)videoAdViewDidCloseOtherController:interactionType:;
- (void)videoAdViewFinishViewDidClick:;
- (void)layoutSubviews;
- (void)setup;
@end
