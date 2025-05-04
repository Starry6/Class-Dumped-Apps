@interface AWEMVExtendedConsumptionPlayletElement : AWEMVExtendedConsumptionBaseElement
@property (nonatomic) AWEMVExtendedConsumptionPlayletBarView playletView;
@property (nonatomic) <AWEShowShrinkTransitionWrapperProtocol> shrinkTransitionWrapper;
- (void)handleClickAction:;
- (BOOL)canAppearWithModel:context:;
- (id)titleString:barModel:;
- (id)playletView;
- (id)bottomBarTrackParams;
- (id)shrinkTransitionWrapper;
- (id)showTrackerRegisterParams;
- (void)setPlayletView:;
- (void)setShrinkTransitionWrapper:;
- (void)viewDidLoad;
- (id)priority;
- (void)setData:;
- (void).cxx_destruct;
- (void)setupUI;
@end
