@interface AWEPlayInteractionAnchorTemplateDetailPagePanelController : AWEPlayInteractionBaseController
@property (nonatomic) AWEFeedAnchorTemplateDetailPageManager detailPageManager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isPanelShowed;
- (id)detailPageManager;
- (void)showTemplateDetailPage;
- (void)preloadLynxResourceIfNeeded;
- (void)setDetailPageManager:;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)reset;
@end
