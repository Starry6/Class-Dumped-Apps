@interface AWEPlayInteractionComponentGlobalPriorityController : AWEPlayInteractionBaseController
@property (nonatomic) AWEPlayInteractionComponentGlobalPriorityManager globalPriorityManager;
@property (nonatomic) NSPointerArray allElements;
- (void)dealloc;
- (void)updateAllSubViews;
- (id)globalPriorityManager;
- (void)setGlobalPriorityManager:;
- (void)setupGlobalPriorityManager;
- (void)bindProperties;
- (void)processGlobalAvoid;
- (void)activateComponentWithAllElements;
- (void)viewDidLoad;
- (id)allElements;
- (void)setAllElements:;
- (void).cxx_destruct;
- (void)reset;
@end
