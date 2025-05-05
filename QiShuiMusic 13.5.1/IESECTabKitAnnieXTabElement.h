@interface IESECTabKitAnnieXTabElement : IESECTabKitPuzzleTabElement
@property (nonatomic) IESECServiceProxy<IESECTabKitPreProcessService> preprocessService;
- (id)createHybridContainer;
- (id)preprocessService;
- (void)setPreprocessService:;
- (id)updateRouterParamsForPuzzleContext:config:;
- (void).cxx_destruct;
- (void)viewDidLoad;
@end
