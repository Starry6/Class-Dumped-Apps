@interface AWEPlayInteractionLongVideoPlusSelectLeftElementViewModel : AWEPlayInteractionBaseElementViewModel
@property (nonatomic) AWEListDataController<AWELongVideoPlusDataControllerProtocol> longVideoPlusDataController;
- (id)longVideoPlusDataController;
- (void)setLongVideoPlusDataController:;
- (id)showLongVideoSelectEpisodePanelWithDelegate:;
- (void)onPaySuccessNotification;
- (id)getWillLoadModel;
- (void)p_preloadIfNeeded;
- (BOOL)canAutoPlayToNext:;
- (id)p_canAutoPlayToNextForFailReason;
- (void)dealloc;
- (id)initWithContext:;
- (void).cxx_destruct;
- (void)setupObserver;
@end
