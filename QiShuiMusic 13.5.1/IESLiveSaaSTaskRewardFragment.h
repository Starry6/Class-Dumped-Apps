@interface IESLiveSaaSTaskRewardFragment : IESLiveRoomComponent
@property (nonatomic) IESLiveSaaSLiveRoomModel roomModel;
@property (nonatomic) IESLiveSaaSComponentContext context;
@property (nonatomic) IESLiveSaaSTaskRewardViewModel viewModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMount;
- (void)didSetAttachingDIContext;
- (id)initWithRoom:trackContext:componentContext:viewModel:;
- (void)popGiftPanelForTask;
- (id)roomModel;
- (void)setRoomModel:;
- (void)showGuideBarIfNeeded;
- (id)viewModel;
- (id)context;
- (void).cxx_destruct;
- (void)setContext:;
- (void)setViewModel:;
+ (id)componentWithRoom:trackContext:componentContext:;
@end
