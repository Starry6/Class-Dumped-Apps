@interface AWEYapEditFinishComponent : ACCFeatureComponent
@property (nonatomic) <ACCEditViewContainer> viewContainer;
@property (nonatomic) <ACCEditServiceProtocol> editService;
@property (nonatomic) <ACCSequenceEditServiceProtocol> sequenceEditService;
@property (nonatomic) ACCAnimatedButton nextButton;
- (void)nextButtonClicked;
- (void)componentDidMount;
- (id)editService;
- (void)setEditService:;
- (void)loadComponentView;
- (id)sequenceEditService;
- (void)setSequenceEditService:;
- (id)serviceBinding;
- (void)configBottomViewIfNeeded;
- (void)configCornerRadius:forView:;
- (void)updateFinishBtnTitle:forState:;
- (void)p_nextButtonClicked;
- (void)trackFinishBtnClicked;
- (void).cxx_destruct;
- (id)nextButton;
- (void)setNextButton:;
- (void)setViewContainer:;
- (id)viewContainer;
- (id)nextButtonTitle;
@end
