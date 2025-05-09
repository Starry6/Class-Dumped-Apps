@interface AWEShareListPanel : UIViewController
@property (nonatomic) AWEModularizedComponentTableView tableView;
@property (nonatomic) double height;
@property (nonatomic) double width;
@property (nonatomic) AWEPanelTransitionController transitionController;
@property (nonatomic) <AWESharePanelListDataSource> manager;
@property (nonatomic) AWEShareLiveLandscapeInteractionView interactionView;
@property (nonatomic) UIView titleView;
@property (nonatomic) UIButton titleButton;
@property (nonatomic) @? backBtnCloseCallback;
@property (nonatomic) <AWEInnerNotificationController> notificationController;
@property (nonatomic) BOOL dismissInitiative;
@property (nonatomic) UIVisualEffectView contentVisualEffectView;
@property (nonatomic) NSMutableArray dismissHandlers;
@property (nonatomic) NSMutableArray willDismissHandlers;
@property (nonatomic) DUXContentSheet sheet;
@property (nonatomic) @? dismissHandler;
@property (nonatomic) @? dismissPassiveHandler;
@property (nonatomic) @? willDismissHandler;
@property (nonatomic) @? beforeDismissAction;
@property (nonatomic) UIVisualEffect contentVisualEffect;
@property (nonatomic) @? extra_dux_sheetShouldRecognizeAsynchronousWithGesturesBlock;
@property (nonatomic) NSDictionary trackDict;
@property (nonatomic) UIViewController onViewController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) Q panelType;
@property (nonatomic) Q styleOptions;
@property (nonatomic) UIView contentView;
@property (nonatomic) {CGSize=dd} preferredContentSize;
@property (nonatomic) UIButton shareButton;
@property (nonatomic) BOOL userInteractionEnabled;
- (void)showOnViewController:completion:;
- (id)dux_sheetShouldRecognizeAsynchronousWithGestures;
- (void)sheetWillDismiss:;
- (void)sheetDidDismiss:;
- (void)updateSheetHeight:animated:completion:;
- (unsigned long long)panelType;
- (void)setTrackDict:;
- (id)trackDict;
- (id)currentManager;
- (void)addDismissedHandler:;
- (void)addWillDismissHandler:;
- (void)setOnViewController:;
- (id)onViewController;
- (id)dismissHandlers;
- (void)setDismissHandlers:;
- (void)dismissShareListPanelWithCompletion:;
- (void)updatePanelHeight:;
- (id)collectionFromContentView:;
- (void)configDuxSheetIsPortrait:;
- (void)showOnViewController:mixInteraction:completion:;
- (void)handleTabDidChangeNotification;
- (id)dismissPassiveHandler;
- (void)setDismissPassiveHandler:;
- (id)contentVisualEffect;
- (id)contentVisualEffectView;
- (void)setContentVisualEffectView:;
- (void)configPanelListManager:;
- (id)willDismissHandlers;
- (BOOL)dismissInitiative;
- (void)setBackBtnCloseCallback:;
- (void)setDismissInitiative:;
- (id)beforeDismissAction;
- (id)backBtnCloseCallback;
- (id)extra_dux_sheetShouldRecognizeAsynchronousWithGesturesBlock;
- (void)configTitleViewWithText:titleColor:backgroundColor:showBackBtn:closeCompletion:;
- (void)setTitleViewAccessibilityWithText:;
- (void)setBeforeDismissAction:;
- (void)setContentVisualEffect:;
- (void)setExtra_dux_sheetShouldRecognizeAsynchronousWithGesturesBlock:;
- (void)setWillDismissHandlers:;
- (void)updateViewConstraints;
- (void)viewWillDisappear:;
- (id)interactionView;
- (id)tableView:viewForHeaderInSection:;
- (id)titleView;
- (id)tableView:cellForRowAtIndexPath:;
- (void)setDismissHandler:;
- (id)notificationController;
- (void)setTitleView:;
- (void)setManager:;
- (BOOL)isUserInteractionEnabled;
- (long long)tableView:numberOfRowsInSection:;
- (void)dealloc;
- (id)dismissHandler;
- (void)setHeight:;
- (long long)numberOfSectionsInTableView:;
- (void)tableView:willDisplayCell:forRowAtIndexPath:;
- (void)setWidth:;
- (void)setTableView:;
- (void)viewDidLoad;
- (id)contentView;
- (id)tableView;
- (void)setNotificationController:;
- (id)initWithWidth:;
- (id)manager;
- (void)dismiss;
- (void)setInteractionView:;
- (void)viewDidDisappear:;
- (double)width;
- (void)dismissAnimated:completion:;
- (id)initWithNibName:bundle:;
- (void)viewWillAppear:;
- (void)dismissWithCompletion:;
- (void).cxx_destruct;
- (double)tableView:heightForRowAtIndexPath:;
- (id)transitionController;
- (double)height;
- (double)tableView:heightForHeaderInSection:;
- (void)setUserInteractionEnabled:;
- (void)setTransitionController:;
- (unsigned long long)styleOptions;
- (double)tableView:heightForFooterInSection:;
- (id)tableView:viewForFooterInSection:;
- (id)initWithHeight:;
- (id)titleButton;
- (void)setShareButton:;
- (id)shareButton;
- (void)setTitleButton:;
- (void)setWillDismissHandler:;
- (id)willDismissHandler;
- (id)sheet;
- (void)setSheet:;
@end
