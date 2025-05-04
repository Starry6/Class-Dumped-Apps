@interface AWESelectTemplateViewProvider : AWESceneViewProvider
@property (nonatomic) UIView playerContainer;
@property (nonatomic) BOOL isCartoonFace;
@property (nonatomic) UIViewController rootController;
@property (nonatomic) BOOL needAdvanceTemplate;
- (id)playerContainer;
- (void)setPlayerContainer:;
- (id)maxPlayerFrame;
- (double)changeTemplateFooterHeight;
- (double)changeTemplateViewHeight;
- (void)zoomOutToFullScreen;
- (double)selectTemplateViewHeight;
- (double)selectTemplateFooterHeight;
- (id)initWithRootController:;
- (void)setNeedAdvanceTemplate:;
- (void)setIsCartoonFace:;
- (BOOL)isCartoonFace;
- (BOOL)needAdvanceTemplate;
- (void).cxx_destruct;
- (void)setRootController:;
- (id)rootController;
- (void)zoomIn;
@end
