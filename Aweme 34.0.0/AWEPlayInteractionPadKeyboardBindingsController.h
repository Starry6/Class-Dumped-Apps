@interface AWEPlayInteractionPadKeyboardBindingsController : AWEPlayInteractionNewBaseController
@property (nonatomic) NSObject<AWEPlayInteractionFavoriteElementViewModelProtocol> favoriteViewModel;
@property (nonatomic) BOOL isAppear;
- (id)aAWEPadModuleAdapter;
- (BOOL)isAppear;
- (void)setIsAppear:;
- (id)trackCommonParams;
- (void)registerKeyboardBindings;
- (void)trackKeyEvent:key:clickType:;
- (id)favoriteViewModel;
- (BOOL)isPlayerOnScreen;
- (void)setupFavoriteStatus;
- (void)onSpaceKeyDown;
- (void)setFavoriteViewModel:;
- (void)viewDidLoad;
- (void)setData:;
- (void).cxx_destruct;
- (void)viewDidAppear;
- (void)viewDidDisappear;
+ (Class)aAWEPadModuleAdapterClass;
@end
