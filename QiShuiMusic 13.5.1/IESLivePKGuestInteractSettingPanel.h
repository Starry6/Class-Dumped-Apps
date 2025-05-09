@interface IESLivePKGuestInteractSettingPanel : UIView
@property (nonatomic) NSArray configurations;
@property (nonatomic) NSArray sectionItems;
@property (nonatomic) NSString title;
@property (nonatomic) HTSEventContext eventContext;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UITableView tableView;
@property (nonatomic) UIView seperatorLineView;
@property (nonatomic) BOOL didTrackForGuestGift;
@property (nonatomic) double tableViewHeight;
@property (nonatomic) BOOL oddTimeToRefreshSettingPanel;
@property (nonatomic) <IESLivePKGuestInteractSettingsAction> actionDelegate;
@property (nonatomic) BOOL isFromPK;
@property (nonatomic) NSMutableDictionary latestSettings;
@property (nonatomic) NSNumber fixedPanelHeight;
@property (nonatomic) IESLivePresentNavController nav;
@property (nonatomic) BOOL isPanelShow;
@property (nonatomic) BOOL didFetchSetting;
@property (nonatomic) @? heightDidChanged;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)didFetchSetting;
- (void)setNav:;
- (void)setIsPanelShow:;
- (id)addAlphaMaskParameterToUrl:;
- (id)applySettingTypes;
- (id)audienceInteractiveSettingsAction;
- (id)authorityItemsWithSettings:;
- (id)descForApplySettingType:;
- (void)didSetAttachingDIContext;
- (BOOL)didTrackForGuestGift;
- (void)didUpdatedSettingsSucceed;
- (void)didUpdatedSettingsSucceedWithData:;
- (void)fetchLocalAudienceInteractiveSettingsWithCompletion:;
- (id)fixedPanelHeight;
- (id)generateAudioAndVideoViewModelWithSettings:;
- (id)generateAuthorityViewModelWithSettings:;
- (id)heightDidChanged;
- (id)initWithFrame:title:actionDelegate:eventContext:;
- (BOOL)isFromPK;
- (BOOL)isPanelShow;
- (id)latestSettings;
- (void)loadDataAndRefresh;
- (id)makeSwitchItemWithTitle:initialValue:;
- (BOOL)oddTimeToRefreshSettingPanel;
- (void)p_addObserver;
- (void)panelDidPopupAndShow;
- (void)refreshPanelHeight;
- (id)seperatorLineView;
- (void)setDidFetchSetting:;
- (void)setDidTrackForGuestGift:;
- (void)setEventContext:;
- (void)setFixedPanelHeight:;
- (void)setHeightDidChanged:;
- (void)setIsFromPK:;
- (void)setLatestSettings:;
- (void)setOddTimeToRefreshSettingPanel:;
- (void)setSeperatorLineView:;
- (void)showAudioAndVideoAuthority:settings:;
- (void)showLinkAcceptAuthority:settings:;
- (void)showThirdLevelPanelWithPopupItemConfigBlock:viewModelBlock:didShowBlock:;
- (void)trackDiff;
- (void)updateListWithSettings:;
- (void)updatePanelScrollEnabled:;
- (void)setupConstraints;
- (void)setTitleLabel:;
- (id)tableView:cellForRowAtIndexPath:;
- (void)record;
- (unsigned long long)currentScene;
- (void)setConfigurations:;
- (void)setSectionItems:;
- (id)actionDelegate;
- (void)setTitle:;
- (double)tableView:heightForRowAtIndexPath:;
- (id)tableView:viewForHeaderInSection:;
- (id)title;
- (void).cxx_destruct;
- (id)configurations;
- (void)setTableView:;
- (double)tableView:heightForHeaderInSection:;
- (id)sectionItems;
- (id)eventContext;
- (id)titleLabel;
- (void)tableView:willDisplayCell:forRowAtIndexPath:;
- (id)tableView;
- (long long)tableView:numberOfRowsInSection:;
- (long long)numberOfSectionsInTableView:;
- (void)setActionDelegate:;
- (void)setupViews;
- (double)tableViewHeight;
- (void)setTableViewHeight:;
- (id)nav;
@end
