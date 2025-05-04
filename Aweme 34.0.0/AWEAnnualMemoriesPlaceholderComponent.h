@interface AWEAnnualMemoriesPlaceholderComponent : ACCFeatureComponent
@property (nonatomic) <ACCEditServiceProtocol> editService;
@property (nonatomic) <ACCEditViewContainer> viewContainer;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void)componentWillAppear;
- (id)editService;
- (void)setEditService:;
- (void)firstRenderWithEditService:;
- (void).cxx_destruct;
- (void)setViewContainer:;
- (id)viewContainer;
@end
