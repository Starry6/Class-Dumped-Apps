@interface AWECommentTopBackgroundComponent : ACCFeatureComponent
@property (nonatomic) UIView backGroundView;
@property (nonatomic) <ACCEditViewContainer> viewContainer;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (id)backGroundView;
- (void)setBackGroundView:;
- (void)loadComponentView;
- (void).cxx_destruct;
- (void)setViewContainer:;
- (id)viewContainer;
@end
