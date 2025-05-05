@interface IESLiveSaaSIndustryInfoFragment : IESLiveRoomComponent
@property (nonatomic) <IESLiveSaaSLayoutContainerProvider> containerProvider;
@property (nonatomic) <IESLiveSaaSContainerKitWatchdog> containerKit;
@property (nonatomic) IESLiveSaaSLiveRoomModel room;
@property (nonatomic) IESLiveSaaSComponentContext componentContext;
@property (nonatomic) IESLiveSaaSIndustryInfoWebView bannerView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)industryInfoWebViewDestroyView:;
- (void)componentDidMount;
- (void)componentOrientationChanged:;
- (id)containerKit;
- (void)createRenderBanner;
- (void)didSetAttachingDIContext;
- (void)industryInfoWebView:placeHolderViewWithSize:;
- (void)removeBannerIfNeeded;
- (void)renderBanners:;
- (void)setContainerKit:;
- (void)setContainerProvider:;
- (id)containerProvider;
- (void).cxx_destruct;
- (void)messageReceived:;
- (id)bannerView;
- (void)setBannerView:;
+ (id)componentWithRoom:trackContext:componentContext:;
@end
