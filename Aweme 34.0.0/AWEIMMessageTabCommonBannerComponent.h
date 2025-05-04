@interface AWEIMMessageTabCommonBannerComponent : AWEIMComponentBase
@property (nonatomic) <AWEIMChatListHeaderInterface> headerService;
@property (nonatomic) <AWEIMMessageTabBannerInterface> bannerService;
@property (nonatomic) AWEIMMessageTabCommonBannerInteractor bannerInteractor;
@property (nonatomic) BOOL justHandleCacheBannerInViewDidLoad;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)headerService;
- (void)hostVC_viewWillAppear;
- (void)afterInitialComponentAllResolved:;
- (void)hostVC_viewDidLoad;
- (void)setHeaderService:;
- (void)setBannerService:;
- (id)bannerService;
- (void)listViewControllerWillAppear:;
- (id)bannerInteractor;
- (void)createBannerInteractor;
- (Class)interactorClass;
- (void)setJustHandleCacheBannerInViewDidLoad:;
- (void)callViewWillAppearWhenAppropriate;
- (BOOL)justHandleCacheBannerInViewDidLoad;
- (void)setBannerInteractor:;
- (void)viewWillAppear;
- (void).cxx_destruct;
@end
