@interface AWELivePreStreamCenterContainer : AWELiveBaseElementContainer
@property (nonatomic) AWELiveElementConfig elementConfig;
@property (nonatomic) AWELivePreStreamConfigCenter configCenter;
- (id)elementConfig;
- (void)setElementConfig:;
- (void)setConfigCenter:;
- (id)configCenter;
- (void)setupCenterContainer;
- (id)getLiveStatusView;
- (id)containerView;
- (void).cxx_destruct;
@end
