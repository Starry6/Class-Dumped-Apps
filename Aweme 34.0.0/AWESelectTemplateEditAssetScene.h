@interface AWESelectTemplateEditAssetScene : AWEScene
@property (nonatomic) ACCNLEWorksCropEditManager editManager;
@property (nonatomic) UIView textMaskView;
@property (nonatomic) AWEModalTransitionDelegate modalTransDelegate;
@property (nonatomic) AWESelectTemplateViewModel viewModel;
@property (nonatomic) AWESelectTemplatePlayerViewModel playerViewModel;
- (id)textMaskView;
- (void)setTextMaskView:;
- (id)modalTransDelegate;
- (void)setModalTransDelegate:;
- (void)setPlayerViewModel:;
- (id)playerViewModel;
- (void)sceneDidLoad:;
- (void)sceneWillApper:operation:duration:;
- (void)sceneDidApper:operation:;
- (void)sceneWillDisapper:operation:duration:;
- (void)sceneDidDisapper:operation:;
- (void)sceneDidUnload:;
- (void)sceneVc_viewDidAppear:;
- (void)sceneVc_viewDidDisappear:;
- (void)p_setupEditView;
- (id)editManager;
- (void)setEditManager:;
- (void)setGameplayInfoForModel:withIndex:;
- (id)viewModel;
- (void)setViewModel:;
- (void).cxx_destruct;
@end
