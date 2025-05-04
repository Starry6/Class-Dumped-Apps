@interface AWEPlayInteractionAnchorDetailPageHalfScreenPanelController : AWEPlayInteractionBaseController
@property (nonatomic) AWEDetailManager detailManager;
@property (nonatomic) <AWEPlayInteractionPanelManagerProtocol> panelManager;
@property (nonatomic) BOOL genericEffectPanelShowed;
@property (nonatomic) BOOL isAppear;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isAppear;
- (void)setIsAppear:;
- (void)shrinkVideoWhenShowPanel:targetHeight:;
- (void)magnifyVideoWhenCloseCommentPanelIfNeeded:;
- (void)resizeVideoWhenDragCommentPanel:;
- (BOOL)isPanelShowed;
- (id)panelManager;
- (void)setPanelManager:;
- (id)detailManager;
- (void)setDetailManager:;
- (void)openDetailHalfScreenPanelWithDetailViewController:;
- (BOOL)genericEffectPanelShowed;
- (void)setGenericEffectPanelShowed:;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)reset;
@end
