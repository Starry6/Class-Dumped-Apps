@interface AWEFriendsCameraRecordGuideComponent : ACCFeatureComponent
@property (nonatomic) UILabel recordGuideLabel;
@property (nonatomic) <ACCRecorderViewContainer> viewContainer;
@property (nonatomic) <ACCRecordUIHiddenStrategyService> hiddenStrategyService;
@property (nonatomic) BOOL hasAppeared;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updateItemsHiddenWithAnimation:;
- (void)componentDidMount;
- (void)componentDidAppear;
- (unsigned long long)preferredLoadPhase;
- (void)loadComponentView;
- (void)dismissIfNeeded;
- (id)recordGuideLabel;
- (void)p_configPredicate;
- (id)hiddenStrategyService;
- (void)updateLabelHiddenWithAnimated:;
- (void)shouldItemsShow:animated:;
- (void)viewContainerDidLayout;
- (void)setRecordGuideLabel:;
- (void)setHiddenStrategyService:;
- (void).cxx_destruct;
- (BOOL)hasAppeared;
- (void)setHasAppeared:;
- (void)setViewContainer:;
- (id)viewContainer;
@end
