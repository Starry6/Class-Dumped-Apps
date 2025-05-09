@interface AWEIMGroupDetailViewController : UIViewController
@property (nonatomic) UITableView tableView;
@property (nonatomic) AWEIMGroupDetailMemberCell avatarCell;
@property (nonatomic) AWEIMGroupDetailShareCell shareCell;
@property (nonatomic) AWEIMGroupDetailInviteCell inviteCell;
@property (nonatomic) NSArray sectionArray;
@property (nonatomic) BOOL isMute;
@property (nonatomic) BOOL isInMsgBox;
@property (nonatomic) BOOL isStickOnTop;
@property (nonatomic) q currentUserRole;
@property (nonatomic) BOOL isViewLoaded;
@property (nonatomic) BOOL shouldShowGroupManagementGuide;
@property (nonatomic) NSDictionary routerDic;
@property (nonatomic) BOOL hideSectionTwo;
@property (nonatomic) BOOL hideExitCell;
@property (nonatomic) NSString liveAutoSyncDescription;
@property (nonatomic) NSString workAutoSyncDescription;
@property (nonatomic) BOOL shouldNotTransferToSetting;
@property (nonatomic) BOOL shouldUseWebcastProfile;
@property (nonatomic) BOOL shownInHalfScreen;
@property (nonatomic) UIImage imageUploading;
@property (nonatomic) NSString imageSourceForTracking;
@property (nonatomic) AWEIMMessageConversation conversation;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)currentUserRole;
- (id)__shareBtnTitle;
- (void)trackEventOnShareGroupWithName:;
- (id)__addGroupNumberRowWithArray:;
- (void)__exitAndDissolveGroup;
- (void)__exitAndDissolveGroupTrackerWithEvent:;
- (void)__getGroupNumber;
- (id)avatarCell;
- (void)backBtnClicked;
- (long long)cellTypeAtIndexPath:;
- (BOOL)configWithRouterParamDict:;
- (BOOL)hideExitCell;
- (BOOL)hideSectionTwo;
- (id)imageSourceForTracking;
- (id)imageUploading;
- (id)inviteCell;
- (BOOL)isInMsgBox;
- (BOOL)isStickOnTop;
- (void)leaveGroupChat;
- (id)liveAutoSyncDescription;
- (void)msgInBoxSwitchAction;
- (void)muteSwitchAction;
- (void)participantsDidUpdate;
- (id)routerDic;
- (id)sectionArray;
- (void)setAvatarCell:;
- (void)setCurrentUserRole:;
- (void)setHideExitCell:;
- (void)setHideSectionTwo:;
- (void)setImageSourceForTracking:;
- (void)setImageUploading:;
- (void)setInviteCell:;
- (void)setIsInMsgBox:;
- (void)setIsMute:;
- (void)setIsStickOnTop:;
- (void)setIsViewLoaded:;
- (void)setLiveAutoSyncDescription:;
- (void)setRouterDic:;
- (void)setSectionArray:;
- (void)setShareCell:;
- (void)setShouldNotTransferToSetting:;
- (void)setShouldShowGroupManagementGuide:;
- (void)setShouldUseWebcastProfile:;
- (void)setShownInHalfScreen:;
- (void)setWorkAutoSyncDescription:;
- (id)shareCell;
- (BOOL)shouldNotTransferToSetting;
- (BOOL)shouldShowGroupManagementGuide;
- (BOOL)shouldUseWebcastProfile;
- (void)showAllGroupChatMember;
- (void)showShareCommandWithType:enterMethod:enterFrom:;
- (BOOL)shownInHalfScreen;
- (void)stickOnSwitchAction;
- (void)trackEventOnGroupNumberWithName:;
- (void)trackEventWithSwitchName:isOn:;
- (id)workAutoSyncDescription;
- (id)tableView:cellForRowAtIndexPath:;
- (id)conversation;
- (double)tableView:heightForRowAtIndexPath:;
- (void)tableView:didSelectRowAtIndexPath:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (void)viewWillAppear:;
- (void)setTableView:;
- (double)tableView:heightForHeaderInSection:;
- (void)tableView:willDisplayCell:forRowAtIndexPath:;
- (id)tableView;
- (long long)tableView:numberOfRowsInSection:;
- (void)viewDidLoad;
- (long long)numberOfSectionsInTableView:;
- (double)tableView:heightForFooterInSection:;
- (id)tableView:viewForFooterInSection:;
- (BOOL)isViewLoaded;
- (void)setConversation:;
- (void)setupUI;
- (BOOL)isMute;
- (void)reloadTableView;
- (void)trackEventWithName:;
@end
