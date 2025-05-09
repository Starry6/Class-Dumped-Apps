@interface AWEIMFansGroupMasterStateViewModel : NSObject
@property (nonatomic) BOOL onLoading;
@property (nonatomic) BOOL showErrorPage;
@property (nonatomic) BOOL showEmptyPage;
@property (nonatomic) BOOL canShowIntroduceView;
@property (nonatomic) BOOL canShowContainerView;
@property (nonatomic) BOOL needReloadAllData;
@property (nonatomic) BOOL needUpdateUIFrame;
@property (nonatomic) BOOL needClosePage;
@property (nonatomic) BOOL isGroupEdited;
@property (nonatomic) q refreshState;
@property (nonatomic) BOOL canShowTopTipView;
@property (nonatomic) AWEIMCreateFansGroupModel openCreateFansGroupPageModel;
@property (nonatomic) NSString toastContent;
@property (nonatomic) {CGSize=dd} exportHeaderSize;
@property (nonatomic) {CGSize=dd} exportFooterSize;
@property (nonatomic) {CGSize=dd} inactiveHeaderSize;
@property (nonatomic) {CGSize=dd} inactiveFooterSize;
@property (nonatomic) NSString managementToolHeaderContent;
@property (nonatomic) NSString exportHeaderContent;
@property (nonatomic) NSString exportFooterContent;
@property (nonatomic) NSString inactiveHeaderContent;
@property (nonatomic) NSString inactiveFooterContent;
@property (nonatomic) double exportSectionHeaderBottomY;
@property (nonatomic) double exportSectionBottomY;
@property (nonatomic) {CGSize=dd} topBannerSize;
@property (nonatomic) NSArray sections;
@property (nonatomic) NSArray exportGroupList;
@property (nonatomic) NSArray inactiveGroupList;
@property (nonatomic) AWEIMFansGroupMasterStateModel model;
@property (nonatomic) NSDictionary trackEnterEventInfo;
@property (nonatomic) BOOL isSwitchBySwipeGesture;
@property (nonatomic) NSDictionary trackSaveEventInfo;
@property (nonatomic) BOOL shouldShowPrivilegeEscalationGuide;
@property (nonatomic) AWEIMFansGroupPrivilegeEscalationViewModel privilegeEscalationGuideViewModel;
@property (nonatomic) @? showPrivilegeEscalationGuideCompletion;
@property (nonatomic) NSString createBtnTitle;
@property (nonatomic) NSArray oldExportGroupList;
@property (nonatomic) NSMutableArray exportGroupListM;
@property (nonatomic) NSMutableArray inactiveGroupListM;
@property (nonatomic) NSMutableDictionary groupId2CursorDictM;
@property (nonatomic) NSString entryLimitsChangedCid;
@property (nonatomic) NSArray td_leavePageExportGroupList;
@property (nonatomic) q td_lastFetchDiffScene;
@property (nonatomic) BOOL td_isFirstViewDidAppear;
@property (nonatomic) BOOL shouldInsertGroup;
@property (nonatomic) BOOL groupCountHasChanged;
@property (nonatomic) q navBarRightButtonType;
@property (nonatomic) q bottomActions;
@property (nonatomic) BOOL navBarRightButtonEnable;
@property (nonatomic) BOOL disableVCRoot;
@property (nonatomic) q editVersionWhileSaveOperation;
@property (nonatomic) BOOL needPostGroupUpdateNotificationWhileDealloc;
@property (nonatomic) AWEIMPublicGroupManagerPageEditViewModel editViewModel;
@property (nonatomic) AWEIMFansGroupMasterStateAlertInfo showAlertInfo;
@property (nonatomic) NSString source;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString enterMethod;
@property (nonatomic) BOOL isAlertingToBack;
@property (nonatomic) BOOL isFromNewCardStyle;
@property (nonatomic) q cidOnListTop;
@property (nonatomic) BOOL forceHideCreateGroupButton;
@property (nonatomic) IESIMOtherGroupFooterViewModel otherGroupShowViewModel;
@property (nonatomic) q forceLoadingTime;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setEnterFrom:;
- (void)setEnterMethod:;
- (id)enterMethod;
- (id)enterFrom;
- (id)toastContent;
- (void)setToastContent:;
- (void)setRefreshState:;
- (BOOL)showEmptyPage;
- (BOOL)showErrorPage;
- (BOOL)canShowContainerView;
- (void)setOnLoading:;
- (BOOL)onLoading;
- (void)setCanShowContainerView:;
- (void)setShowEmptyPage:;
- (long long)forceLoadingTime;
- (void)fetchDataWithResult:completion:forceLoadingTime:;
- (BOOL)canShowTopTipView;
- (id)invokeEditSaveOperation:;
- (void)fetchDataWithResult:completion:;
- (id)privilegeEscalationGuideViewModel;
- (BOOL)shouldShowPrivilegeEscalationGuide;
- (id)showPrivilegeEscalationGuideCompletion;
- (BOOL)canShowIntroduceView;
- (void)__trackSaveData;
- (id)createBtnTitle;
- (BOOL)navBarRightButtonEnable;
- (BOOL)disableVCRoot;
- (id)otherGroupShowViewModel;
- (void)didTapCreateFansGroupButton;
- (id)showAlertInfo;
- (BOOL)isAlertingToBack;
- (void)setIsAlertingToBack:;
- (id)exportGroupList;
- (id)inactiveGroupList;
- (void)topTipViewOnClicked;
- (long long)navBarRightButtonType;
- (id)trackEnterEventInfo;
- (id)trackSaveEventInfo;
- (double)exportSectionBottomY;
- (double)exportSectionHeaderBottomY;
- (id)exportFooterContent;
- (id)inactiveFooterContent;
- (id)exportHeaderSize;
- (id)inactiveHeaderSize;
- (id)exportFooterSize;
- (id)inactiveFooterSize;
- (BOOL)forceHideCreateGroupButton;
- (void)setCidOnListTop:;
- (void)setForceHideCreateGroupButton:;
- (void)setIsFromNewCardStyle:;
- (void)setForceLoadingTime:;
- (void)setTd_isFirstViewDidAppear:;
- (void)setExportGroupListM:;
- (void)setInactiveGroupListM:;
- (void)setGroupId2CursorDictM:;
- (void)__modifySectionsIndex;
- (void)__addNotificationObserver;
- (void)__addModelObserver;
- (void)__refreshBottomRegionActions;
- (void)setDisableVCRoot:;
- (void)__refreshNavBarRightButtonEnable;
- (void)__fansGroupExportUpdateByGroupSettingNoti:;
- (void)__fansGroupEntryLimitsChangeNoti:;
- (void)__fansGroupLeaveGroupNoti:;
- (void)__createGroupCompetionNotification:;
- (void)__updateFromSocialGroupNotification:;
- (BOOL)needPostGroupUpdateNotificationWhileDealloc;
- (BOOL)shouldInsertGroup;
- (void)fetchDiffDataWithScene:forceLoadingTime:;
- (void)setShouldInsertGroup:;
- (void)setCanShowTopTipView:;
- (id)oldExportGroupList;
- (BOOL)td_isFirstViewDidAppear;
- (id)td_leavePageExportGroupList;
- (long long)td_lastFetchDiffScene;
- (void)setTrackEnterEventInfo:;
- (void)setTd_leavePageExportGroupList:;
- (void)fetchDiffDataWithScene:;
- (long long)cidOnListTop;
- (void)setShowErrorPage:;
- (void)__updateCreateBtnTitleWithModel:;
- (id)groupId2CursorDictM;
- (void)__appendDataWithModel:;
- (id)exportGroupListM;
- (void)setOldExportGroupList:;
- (void)setCanShowIntroduceView:;
- (void)setNeedReloadAllData:;
- (void)__updateExportSectionBoundary;
- (void)fetchDiffDataWithScene:cursor:;
- (void)setTd_lastFetchDiffScene:;
- (id)entryLimitsChangedCid;
- (id)inactiveGroupListM;
- (void)__tryUpdateProfileCardData;
- (void)__tryUpdateNewProfileCardData;
- (void)__updateDisplayData;
- (void)__updateEditState;
- (void)setNeedUpdateUIFrame:;
- (void)setCreateBtnTitle:;
- (void)setOpenCreateFansGroupPageModel:;
- (void)__resetExportData;
- (void)setIsSwitchBySwipeGesture:;
- (void)setExportGroupList:;
- (void)setInactiveGroupList:;
- (void)setExportSectionHeaderBottomY:;
- (void)setExportSectionBottomY:;
- (BOOL)isGroupEdited;
- (long long)editVersionWhileSaveOperation;
- (void)setEditVersionWhileSaveOperation:;
- (void)__notifyTargetConversationShowStatusChangeIfNeed;
- (void)__updateMyExportFansGroupWithCompletion:;
- (id)alertInfoModel;
- (void)setShowAlertInfo:;
- (BOOL)isSwitchBySwipeGesture;
- (void)setTrackSaveEventInfo:;
- (void)setIsGroupEdited:;
- (BOOL)isFromNewCardStyle;
- (long long)__needCreateGroupActions;
- (long long)bottomActions;
- (void)setBottomActions:;
- (void)__refreshNavBarRightButtonType;
- (BOOL)__createGroupActionIsEnable;
- (void)setNavBarRightButtonType:;
- (void)setNavBarRightButtonEnable:;
- (void)setEntryLimitsChangedCid:;
- (void)setNeedPostGroupUpdateNotificationWhileDealloc:;
- (void)setGroupCountHasChanged:;
- (void)setNeedClosePage:;
- (id)__saveEditHistoryWithOptions:;
- (void)__forceUpdateProfileCardData;
- (void)callback_chatUpdate:dataManagerType:;
- (void)callback_chatDeleted:chatInserted:firstPage:reason:dataManagerType:;
- (void)callback_totalUnreadCountUpdate:;
- (void)callback_peerUserUpdate:ofChat:;
- (void)callback_didEndPullOfflineMessagesWithHasMore:dataManagerType:;
- (BOOL)needReloadAllData;
- (BOOL)needUpdateUIFrame;
- (BOOL)needClosePage;
- (id)openCreateFansGroupPageModel;
- (void)setExportHeaderSize:;
- (void)setExportFooterSize:;
- (void)setInactiveHeaderSize:;
- (void)setInactiveFooterSize:;
- (void)setExportFooterContent:;
- (void)setInactiveFooterContent:;
- (void)setShouldShowPrivilegeEscalationGuide:;
- (void)setPrivilegeEscalationGuideViewModel:;
- (void)setShowPrivilegeEscalationGuideCompletion:;
- (void)setOtherGroupShowViewModel:;
- (id)managementToolHeaderContent;
- (void)setManagementToolHeaderContent:;
- (id)exportHeaderContent;
- (void)setExportHeaderContent:;
- (id)inactiveHeaderContent;
- (void)setInactiveHeaderContent:;
- (id)topBannerSize;
- (void)setTopBannerSize:;
- (BOOL)groupCountHasChanged;
- (void)setModel:;
- (void)viewWillDisappear:;
- (id)initWithParams:;
- (void)dealloc;
- (id)sections;
- (void)viewDidDisappear:;
- (id)model;
- (void)setSections:;
- (void)viewWillAppear:;
- (void).cxx_destruct;
- (id)source;
- (void)setSource:;
- (void)viewDidAppear:;
- (void)moveItemAtIndexPath:toIndexPath:;
- (long long)refreshState;
- (void)didSelectItemAtIndexPath:;
- (id)editViewModel;
@end
