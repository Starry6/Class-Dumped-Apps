@interface AWENewVideoCoverChooseEditComponent : ACCFeatureComponent
@property (nonatomic) <ACCEditViewContainer> viewContainer;
@property (nonatomic) <ACCEditServiceProtocol> editService;
@property (nonatomic) <ACCVideoCoverEditServiceProtocol> videoCoverEditService;
@property (nonatomic) <ACCBusinessInputData> inputData;
- (void)componentDidMount;
- (void)componentWillDisappear;
- (unsigned long long)preferredLoadPhase;
- (void)componentWillAppear;
- (id)editService;
- (void)setEditService:;
- (id)videoCoverEditService;
- (void)setVideoCoverEditService:;
- (void)setupFirstPlaceholderImageViewIfNeed;
- (BOOL)userVideoCoverRenderOptimize;
- (void)dealloc;
- (void).cxx_destruct;
- (id)inputData;
- (void)setInputData:;
- (void)setViewContainer:;
- (id)viewContainer;
@end
