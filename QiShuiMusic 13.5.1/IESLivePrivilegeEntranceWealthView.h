@interface IESLivePrivilegeEntranceWealthView : UIView
@property (nonatomic) BOOL showGuestInfo;
@property (nonatomic) IESLivePrivilegeEntranceWealthViewModel viewModel;
@property (nonatomic) PuzzleHybridContainer dynamicWealthViewContainer;
@property (nonatomic) @? viewFrameChanged;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)viewDidLoadFailedWithUrl:error:;
- (void)bindObserver;
- (id)dynamicWealthViewContainer;
- (id)initWithFrame:viewModel:showGuestInfo:viewFrameChanged:;
- (void)loadLynxView;
- (void)monitorWealthLoadError:;
- (id)routerParams;
- (void)setDynamicWealthViewContainer:;
- (void)setShowGuestInfo:;
- (void)setViewFrameChanged:;
- (BOOL)showGuestInfo;
- (void)viewDidFinishLoadWithURL:;
- (void)viewDidRecieveError:;
- (id)viewFrameChanged;
- (id)viewModel;
- (void).cxx_destruct;
- (void)setViewModel:;
@end
