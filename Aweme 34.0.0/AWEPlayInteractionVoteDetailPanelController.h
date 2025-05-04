@interface AWEPlayInteractionVoteDetailPanelController : AWEPlayInteractionNewBaseController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)showVoteDetailPanel:;
- (BOOL)isPanelShowed;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (void)reset;
- (void)viewDidAppear;
- (void)viewDidDisappear;
- (void)viewWillDisappear;
@end
