@interface AWEFollowGroupPanelViewController : AWEHalfScreenBaseViewController
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIButton cancelButton;
@property (nonatomic) UIButton createButton;
@property (nonatomic) UIImageView emptyImage;
@property (nonatomic) AWEButton createBigButton;
@property (nonatomic) AWEButton confirmButton;
@property (nonatomic) UITableView tableView;
@property (nonatomic) AWEUILoadingView loadingView;
@property (nonatomic) NSString userID;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) AWEFollowGroupListResponseModel responseModel;
@property (nonatomic) NSMutableArray belongGroupsArray;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)aweui_emptyPageConfigForState:;
- (void)aweui_emptyPagePrimaryButtonTapped:;
- (id)aweui_emptyPageEdgeInsets;
- (void)setEnterFrom:;
- (id)enterFrom;
- (id)aAWEPadModuleAdapter;
- (id)aweui_emptyPageBgContainerView;
- (BOOL)onlyTopCornerClips;
- (BOOL)useSmootherTransition;
- (void)createButtonClicked;
- (void)setBelongGroupsArray:;
- (void)_fetchGroupListData;
- (id)createBigButton;
- (id)belongGroupsArray;
- (void)_beforeCreateGroupAlertShow;
- (void)_showGroupPanelAfterCreateOneWithGroupID:groupName:;
- (void)_trackFollowGroupConfirm;
- (void)_updateBelongGroups;
- (void)configWithUserID:enterFrom:;
- (void)setCreateBigButton:;
- (id)userID;
- (id)tableView:cellForRowAtIndexPath:;
- (long long)tableView:numberOfRowsInSection:;
- (void)setCancelButton:;
- (void)tableView:didSelectRowAtIndexPath:;
- (unsigned long long)viewStyle;
- (void)setTableView:;
- (void)setLoadingView:;
- (void)viewDidLoad;
- (id)tableView;
- (id)loadingView;
- (void)setTitleLabel:;
- (id)cancelButton;
- (void).cxx_destruct;
- (double)tableView:heightForRowAtIndexPath:;
- (double)cornerRadius;
- (id)titleLabel;
- (id)emptyImage;
- (unsigned long long)animationStyle;
- (void)setUserID:;
- (id)confirmButton;
- (void)setConfirmButton:;
- (void)cancelButtonTapped;
- (void)_hideLoadingView;
- (void)_showLoadingView;
- (id)createButton;
- (id)responseModel;
- (void)setResponseModel:;
- (void)setEmptyImage:;
- (void)_setupUI;
- (void)setCreateButton:;
- (double)containerWidth;
- (double)containerHeight;
- (void)confirmButtonClicked;
+ (Class)aAWEPadModuleAdapterClass;
@end
