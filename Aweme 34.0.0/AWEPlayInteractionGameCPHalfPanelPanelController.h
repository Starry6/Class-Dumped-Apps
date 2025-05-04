@interface AWEPlayInteractionGameCPHalfPanelPanelController : AWEPlayInteractionNewBaseController
@property (nonatomic) @? isPanelShowedBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isPanelShowed;
- (void)resizeVideoWhenDragPanel:;
- (void)shrinkVideoWhenShowPanelWithAnimation:targetHeight:animations:completion:;
- (void)magnifyVideoWhenClosePanelWithAnimated:animations:completion:;
- (id)isPanelShowedBlock;
- (void)setIsPanelShowedBlock:;
- (void)viewDidLoad;
- (void).cxx_destruct;
@end
