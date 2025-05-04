@interface AWENewCoverChooseEditComponent : ACCFeatureComponent
@property (nonatomic) <ACCEditViewContainer> viewContainer;
@property (nonatomic) <ACCEditServiceProtocol> editService;
@property (nonatomic) UIImageView firstPlaceholderImageView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMount;
- (void)componentWillDisappear;
- (unsigned long long)preferredLoadPhase;
- (void)componentWillAppear;
- (id)editService;
- (void)setEditService:;
- (void)bindServices:;
- (void)firstRenderWithEditService:;
- (void)setupFirstPlaceholderImageViewIfNeed;
- (id)firstPlaceholderImageView;
- (void)setFirstPlaceholderImageView:;
- (void)dealloc;
- (void).cxx_destruct;
- (void)setViewContainer:;
- (id)viewContainer;
@end
