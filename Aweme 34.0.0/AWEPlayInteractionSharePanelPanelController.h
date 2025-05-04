@interface AWEPlayInteractionSharePanelPanelController : AWEPlayInteractionNewBaseController
@property (nonatomic) BOOL sharePanelShowed;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)showSharePanel;
- (id)aAWEPadModuleAdapter;
- (BOOL)sharePanelShowed;
- (void)setSharePanelShowed:;
- (BOOL)isPanelShowed;
- (void)sharePanelWillShow;
- (void)sharePanelDidDismiss;
- (BOOL)shouldResetSpeedControl;
- (void)onShareVCDismissedNotification:;
- (void)sharePanelWillDismiss;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (void)reset;
- (void)viewDidAppear;
- (void)viewDidDisappear;
- (void)viewWillDisappear;
+ (Class)aAWEPadModuleAdapterClass;
@end
