@interface CNContactInlineActionsViewController : UIViewController
@property (nonatomic) NSArray actionItems;
@property (nonatomic) NSArray tokens;
@property (nonatomic) NSDictionary defaultActionPerType;
@property (nonatomic) <CNCustomPresentation> actionsControllerPresentation;
@property (nonatomic) <CNSchedulerProvider> schedulerProvider;
@property (nonatomic) double throttleDelay;
@property (nonatomic) CNContactActionsController actionsController;
@property (nonatomic) CNUIContactsEnvironment environment;
@property (nonatomic) CNUIUserActionListDataSource actionListDataSource;
@property (nonatomic) NSArray contacts;
@property (nonatomic) CNActionsView actionsView;
@property (nonatomic) BOOL displaysUnavailableActionTypes;
@property (nonatomic) BOOL displaysTitles;
@property (nonatomic) CNContact contact;
@property (nonatomic) NSArray supportedActionTypes;
@property (nonatomic) double actionTypesInterspace;
@property (nonatomic) q viewStyle;
@property (nonatomic) <CNContactInlineActionsViewControllerDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) UIView view;
@property (nonatomic) <CNUIObjectViewControllerDelegate> objectViewControllerDelegate;
- (void)setSchedulerProvider:;
- (void)dealloc;
- (void)setEnvironment:;
- (void)setContacts:;
- (id)contact;
- (id)contacts;
- (void)setContact:;
- (void)setDelegate:;
- (id)schedulerProvider;
- (BOOL)_canShowWhileLocked;
- (long long)viewStyle;
- (id)environment;
- (void)setTokens:;
- (id)delegate;
- (void)performAction:;
- (void).cxx_destruct;
- (void)reset;
- (void)loadView;
- (void)setViewStyle:;
- (id)tokens;
- (id)initWithNibName:bundle:;
- (void)viewDidLoad;
- (id)actionItems;
- (id)actionsController;
- (void)didSelectAction:withSourceView:longPress:;
- (BOOL)actionsView:shouldPresentDisambiguationUIForAction:;
- (id)actionsView;
- (void)setActionsView:;
- (void)contactActionsController:didSelectAction:;
- (void)contactActionsController:didUpdateWithMenu:;
- (void)setActionsController:;
- (id)supportedActionTypes;
- (BOOL)displaysUnavailableActionTypes;
- (void)loadCachedActions;
- (void)discoverAvailableActionTypes;
- (id)allModelsObservable;
- (void)processModels:;
- (void)setSupportedActionTypes:;
- (id)actionsControllerPresentation;
- (void)setActionsControllerPresentation:;
- (double)throttleDelay;
- (id)defaultActionPerType;
- (void)setDefaultActionPerType:;
- (id)objectViewControllerDelegate;
- (void)setObjectViewControllerDelegate:;
- (id)initWithContactActionsContext:;
- (id)initWithActionListDataSource:environment:;
- (void)setDisplaysUnavailableActionTypes:;
- (void)updateDesiredTitleFontSizeIfNeeded;
- (void)displayAllSupportedTypesDisabled;
- (void)setDisplaysTitles:;
- (void)setupSingleContactActions;
- (void)checkinLaunchTasksForUndiscoverableActionsForContact:;
- (void)setActionTypesInterspace:;
- (void)removeVisibleActionItems:;
- (void)displayAdditionalActionItems:;
- (void)updateVisibleActionItems:;
- (void)displayActionForType:withDefaultAction:enabled:;
- (void)removeActionForType:;
- (id)makeActionItemForType:;
- (void)updateActionItem:withDefaultAction:;
- (id)existingActionItemForType:;
- (void)generateActionsControllerForActionType:;
- (BOOL)shouldShowDisambiguationForAction:;
- (void)setupGroupActions;
- (void)performGroupActionForType:;
- (BOOL)isGroupActionsView;
- (void)notifyDelegateOfPerformedActionType:fromDisambiguation:;
- (void)notifyDelegateOfDisambiguationForActionType:;
- (id)actionImageTextStyleForViewStyle:;
- (BOOL)displaysTitles;
- (double)actionTypesInterspace;
- (void)setActionItems:;
- (id)actionListDataSource;
- (void)setActionListDataSource:;
+ (id)descriptorForRequiredKeys;
@end
