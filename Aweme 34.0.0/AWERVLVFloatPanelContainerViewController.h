@interface AWERVLVFloatPanelContainerViewController : AWERVMetaPanelViewController
@property (nonatomic) AWERVLVBasePanelViewModel<AWERVLVFloatPanelProtocol> panelViewModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setPanelHeight:;
- (id)panelViewModel;
- (void)refreshModel:;
- (void)dismissPanelVCWithCompletion:;
- (void)setupPanel:;
- (id)panelContentView;
- (void)setPanelViewModel:;
- (void)removePanelViewModel;
- (void)floatPanelDidAppear;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)contentScrollView;
- (void).cxx_destruct;
- (void)closeButtonTapped;
- (void)setupContentView;
@end
