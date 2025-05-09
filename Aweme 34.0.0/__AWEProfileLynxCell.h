@interface __AWEProfileLynxCell : UICollectionViewCell
@property (nonatomic) AWEProfileLynxViewModel viewModel;
@property (nonatomic) @? containerIDConfiguredBlock;
@property (nonatomic) UIViewController<BDXContainerProtocol> containerVC;
@property (nonatomic) UIView<BDXViewContainerProtocol><IESHYHybridViewProtocol> lynxView;
@property (nonatomic) UIView<HunterContainerProtocol> hunterView;
@property (nonatomic) <AWEProfileHybridContainerProtocol> profileHybridContainer;
@property (nonatomic) AWEProfileLynxLoadingView loadingView;
@property (nonatomic) @? childViewControllerCompleteBlock;
@property (nonatomic) <BDXContainerLifecycleProtocol><HunterContainerLifeCycleProtocol><IESHYHybridViewLifecycleProtocol> lynxContainerLifeCycleDelegate;
@property (nonatomic) double lastWidth;
- (id)aAWEPadModuleAdapter;
- (void)sendEvent:params:;
- (void)setContainerVC:;
- (id)lynxView;
- (void)setLynxView:;
- (id)containerVC;
- (void)setHunterView:;
- (id)hunterView;
- (id)childViewControllerCompleteBlock;
- (void)setChildViewControllerCompleteBlock:;
- (id)padService;
- (id)__configSchemaAddExtraParamsWithSourceSchema:;
- (id)lynxContainerLifeCycleDelegate;
- (void)setLynxContainerLifeCycleDelegate:;
- (id)findScrollViewWithName:;
- (void)onThemeChangeNotificationAction:;
- (id)containerIDConfiguredBlock;
- (void)updateLifeContainerDelegate:;
- (void)setContainerIDConfiguredBlock:;
- (void)__configLynxView;
- (void)__configHunterView;
- (void)__configAnnieXView;
- (id)profileHybridContainer;
- (void)__configContext:schema:scrollViewHeight:;
- (void)__confifgFinishWith:;
- (void)setProfileHybridContainer:;
- (void)dealloc;
- (void)setLoadingView:;
- (id)viewModel;
- (id)loadingView;
- (void)setViewModel:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupConfig;
- (double)lastWidth;
- (void)setLastWidth:;
+ (Class)aAWEPadModuleAdapterClass;
+ (id)identifier;
@end
