@interface AWECoproduceIdentityConfigPopViewController : UIViewController
@property (nonatomic) UIView topBar;
@property (nonatomic) UIView containerView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) NSIndexPath selectedIndex;
@property (nonatomic) UIImageView infoIconImageView;
@property (nonatomic) BOOL isFullPageStyle;
@property (nonatomic) DUXNavigationBar duxNavigationBar;
@property (nonatomic) AWECoproduceIdentityFooterView footer;
@property (nonatomic) AWEPublishCoCreatorSettingsRoleModel currentSelectRole;
@property (nonatomic) NSArray coProduceRoles;
@property (nonatomic) UITableView tableView;
@property (nonatomic) @? identifyChangeTappedBlock;
@property (nonatomic) @? canChangeRoleBlock;
@property (nonatomic) NSDictionary coProducerRolesCurrentDict;
@property (nonatomic) @? addCoProduceBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)duxNavigationBar;
- (void)setDuxNavigationBar:;
- (void)didClickInfoIcon;
- (void)setUI;
- (BOOL)isFullPageStyle;
- (id)coProduceRoles;
- (id)infoIconImageView;
- (void)setIsFullPageStyle:;
- (id)coProducerRolesCurrentDict;
- (id)currentSelectRole;
- (id)canChangeRoleBlock;
- (id)identifyChangeTappedBlock;
- (void)configFullPageView;
- (void)setCurrentSelectRole:;
- (void)setCoProduceRoles:;
- (void)setIdentifyChangeTappedBlock:;
- (void)setCanChangeRoleBlock:;
- (void)setCoProducerRolesCurrentDict:;
- (id)addCoProduceBlock;
- (void)setAddCoProduceBlock:;
- (void)setInfoIconImageView:;
- (id)footer;
- (id)tableView:cellForRowAtIndexPath:;
- (long long)tableView:numberOfRowsInSection:;
- (id)init;
- (void)setSelectedIndex:;
- (void)tableView:willDisplayCell:forRowAtIndexPath:;
- (void)tableView:didSelectRowAtIndexPath:;
- (void)setTableView:;
- (void)viewDidLoad;
- (id)containerView;
- (id)tableView;
- (id)selectedIndex;
- (void)setContainerView:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (double)tableView:heightForRowAtIndexPath:;
- (id)topBar;
- (void)setTopBar:;
- (id)titleLabel;
- (void)tableView:didEndDisplayingCell:forRowAtIndexPath:;
- (void)setFooter:;
@end
