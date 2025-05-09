@interface AWEPublishCoproduceViewController : UIViewController
@property (nonatomic) AWEFeedInsetsLabel tipPublishRemainTimes;
@property (nonatomic) DUXNavigationBar duxNavigationBar;
@property (nonatomic) UIButton completeButton;
@property (nonatomic) UITableView tableView;
@property (nonatomic) AWECoProduceFooterView footer;
@property (nonatomic) UIView footerContainer;
@property (nonatomic) AWEPublishCoproduceViewModel coProduceViewModel;
@property (nonatomic) AWECoproduceDescriptionAlertView descriptionAlertView;
@property (nonatomic) BOOL canEdit;
@property (nonatomic) q currentType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dismissContainerAnimated:completion:;
- (void)setCurrentType:;
- (id)completeButton;
- (void)setCompleteButton:;
- (id)duxNavigationBar;
- (void)setDuxNavigationBar:;
- (void)setEvent;
- (void)completeButtonTapped:;
- (id)coProduceViewModel;
- (void)setCoProduceViewModel:;
- (id)initWithCoProduceSettings:fromDraft:canEdit:editedCoproducerList:cancelBlock:completionBlock:logExtra:;
- (void)setCoCreateRemainTimesTip;
- (void)setCoproduceAddUserTableViewCellUsable:;
- (void)showCoCreatorAlertInfoV2;
- (id)getRemainTimesDate;
- (id)tipPublishRemainTimes;
- (void)openWebViewPage:;
- (void)setDescriptionAlertView:;
- (void)showDeleteDialogWithCell:;
- (void)tryMakeFooterToTableView;
- (void)tryMakeFooterToView;
- (void)showDescViewController;
- (void)dismissRoleSelect;
- (void)setTipPublishRemainTimes:;
- (id)descriptionAlertView;
- (id)footer;
- (id)tableView:cellForRowAtIndexPath:;
- (long long)tableView:numberOfRowsInSection:;
- (long long)numberOfSectionsInTableView:;
- (void)tableView:didSelectRowAtIndexPath:;
- (void)setTableView:;
- (void)viewDidLoad;
- (id)tableView;
- (void)scrollViewDidScroll:;
- (void)viewWillAppear:;
- (void).cxx_destruct;
- (double)tableView:heightForRowAtIndexPath:;
- (void)viewDidAppear:;
- (void)setFooter:;
- (void)dismissViewController;
- (void)setupUI;
- (void)closeButtonTapped:;
- (id)footerContainer;
- (void)setFooterContainer:;
- (BOOL)canEdit;
- (void)setCanEdit:;
- (long long)currentType;
- (void)reloadTableView;
@end
