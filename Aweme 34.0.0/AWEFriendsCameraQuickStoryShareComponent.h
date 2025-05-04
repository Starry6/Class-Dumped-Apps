@interface AWEFriendsCameraQuickStoryShareComponent : ACCFeatureComponent
@property (nonatomic) <AWEPostPageQuickStoryShareService> postPageQuickStoryShareService;
- (void)componentDidMount;
- (void)componentDidUnmount;
- (unsigned long long)preferredLoadPhase;
- (id)postPageQuickStoryShareService;
- (void)setPostPageQuickStoryShareService:;
- (void)dealloc;
- (void).cxx_destruct;
@end
