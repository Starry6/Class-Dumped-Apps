@interface AWEPlaylistDetailViewController : AWEMiniLunaBaseViewController
@property (nonatomic) AWEPlaylistDetailViewModel viewModel;
@property (nonatomic) UITableView tableView;
@property (nonatomic) AWEButton moreButton;
@property (nonatomic) AWEPlaylistDataController dataController;
@property (nonatomic) NSObject<MusicService> musicService;
@property (nonatomic) AWEMusicPlayEventService musicEventService;
@property (nonatomic) AWEPlaylistMoreActionSheetPresenter moreActionSheetPresenter;
@property (nonatomic) AWEPlaylistEmptyView songListEmptyView;
@property (nonatomic) AWEMusicExceptionalView exceptionView;
@property (nonatomic) AWEPlaylistDetailHeaderCell headerView;
@property (nonatomic) DUXActionSheet playlistVideoSheet;
@property (nonatomic) @? videoSheetActionHandle;
@property (nonatomic) BOOL isSelfPlayer;
@property (nonatomic) NSString playlistID;
@property (nonatomic) Q playlistCategory;
@property (nonatomic) NSString currentPlayingUniqueId;
@property (nonatomic) NSString secUserID;
@property (nonatomic) NSString userID;
@property (nonatomic) BOOL isCellRemoving;
@property (nonatomic) BOOL hasCheckedPublishAnchor;
@property (nonatomic) UIView bottomContainerView;
@property (nonatomic) DUXButton addSongButton;
@property (nonatomic) BOOL descFoldStatus;
@property (nonatomic) AWEMusicDSPEventModel eventModel;
@property (nonatomic) BOOL isMiniLuna;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)secUserID;
- (void)setSecUserID:;
- (BOOL)configWithRouterParamDict:;
- (BOOL)isMiniLuna;
- (void)setIsMiniLuna:;
- (void)musicService:playStatusChanged:;
- (void)actionSheet:didClickButtonAtIndex:;
- (void)didActionSheetDismiss:;
- (void)setDataController:;
- (void)setPlaylistID:;
- (void)pausePlayers;
- (void)p_loadMore;
- (void)setupBinding;
- (void)backBtnClicked:;
- (id)musicService;
- (void)transferToOwnerWithUid:secUid:enterMethod:extraTrackParams:;
- (void)setMusicService:;
- (void)p_updateHeaderView;
- (void)p_backAction;
- (id)eventModel;
- (void)setEventModel:;
- (void)noNetViewDidTapTryAgain:;
- (void)headerHeightDidChangeWithFoldStatus:;
- (void)p_showEditActionSheetWithParam:;
- (void)p_configNavigationBar;
- (id)exceptionView;
- (void)p_showExceptionView;
- (void)setPlaylistVideoSheet:;
- (id)playlistVideoSheet;
- (id)p_buildActionItemForVC:;
- (void)p_pushEditPlaylist;
- (void)p_pushBatchManage;
- (void)setExceptionView:;
- (void)uploadPlaylistVideo;
- (void)shootPlaylistVideo;
- (void)setVideoSheetActionHandle:;
- (id)videoSheetActionHandle;
- (void)setMusicEventService:;
- (void)playlistModelChangedWithType:changeModels:from:;
- (void)musicSelectViewControllerFinished:;
- (id)musicEventService;
- (id)pageEventParams;
- (id)etPageName;
- (id)autoShowWithMusicService;
- (void)setCurrentPlayingUniqueId:;
- (id)currentPlayingUniqueId;
- (id)initWithPlaylistID:emptyPlaylistInfo:musicService:secUserID:;
- (id)initWithPlaylistID:playlistCategory:emptyPlaylistInfo:musicService:secUserID:;
- (void)bottomPlayerStatusChanged:;
- (void)modelCollectionTypeChanged:;
- (id)initWithPlaylistID:playlistCategory:emptyPlaylistInfo:musicService:secUserID:userID:;
- (void)lunaV2Update:isFromCache:;
- (BOOL)isCellRemoving;
- (void)setIsCellRemoving:;
- (void)setDescFoldStatus:;
- (void)setIsSelfPlayer:;
- (id)p_buildDataController;
- (void)p_updateStatus;
- (BOOL)isSelfPlayer;
- (void)p_checkPublishAnchor;
- (void)p_updatePublishButton;
- (void)p_checkReorderState;
- (void)p_showNotApprovedAlertIfNeed;
- (BOOL)isOtherDouyinLike;
- (BOOL)descFoldStatus;
- (id)songListEmptyView;
- (BOOL)hasCheckedPublishAnchor;
- (BOOL)isMyPlaylist;
- (void)setHasCheckedPublishAnchor:;
- (void)p_showReorderFailureAlert:;
- (id)moreActionSheetPresenter;
- (void)p_showMusicSelectWithEnterMethod:;
- (void)setSongListEmptyView:;
- (void)p_didTapMoreButton:;
- (id)addSongButton;
- (void)generatePlaylistVideo;
- (id)p_sections;
- (id)p_sectionKey:;
- (void)p_deleteSongAtIndexPath:;
- (void)p_addSongAction;
- (void)playlistInfoOrSongListChanged;
- (void)removePlaylistVC;
- (void)tapPlaylistInfoWithParam:;
- (void)tapCollectionCompletion:;
- (void)tapOwnerInfo;
- (void)tapPublish;
- (void)privacyChangeToTargetType:completion:;
- (id)initWithPlaylistID:musicService:secUserID:;
- (void)p_showCollectionToast:;
- (void)setMoreActionSheetPresenter:;
- (void)setAddSongButton:;
- (unsigned long long)playlistCategory;
- (void)setPlaylistCategory:;
- (void)p_showPublishGuideBubbleIfNeed;
- (BOOL)p_playlistUnavailable:;
- (void)p_showPrivacySetting;
- (id)p_privacyContent;
- (void)p_deleteEditPlaylist;
- (void)p_playModel:;
- (void)p_showSubPlayer;
- (void)p_reportCancelCollectEventModel:isSuccess:code:;
- (id)playlistAnchorModel;
- (void)p_startPlayAll;
- (id)p_copyrightDiversionTrackParams;
- (void)p_trackClickCopyrightPop:model:;
- (void)p_trackShowCopyrightPopWithModel:;
- (id)tableView:viewForHeaderInSection:;
- (id)userID;
- (id)tableView:cellForRowAtIndexPath:;
- (long long)tableView:numberOfRowsInSection:;
- (void)dealloc;
- (long long)numberOfSectionsInTableView:;
- (void)tableView:didSelectRowAtIndexPath:;
- (void)setTableView:;
- (id)viewModel;
- (void)viewDidLoad;
- (id)tableView;
- (id)headerView;
- (id)moreButton;
- (void)setViewModel:;
- (void).cxx_destruct;
- (double)tableView:heightForRowAtIndexPath:;
- (void)setMoreButton:;
- (void)viewDidAppear:;
- (double)tableView:heightForHeaderInSection:;
- (void)tableView:didEndDisplayingCell:forRowAtIndexPath:;
- (id)tableView:trailingSwipeActionsConfigurationForRowAtIndexPath:;
- (void)setHeaderView:;
- (void)setUserID:;
- (BOOL)tableView:canEditRowAtIndexPath:;
- (id)tableView:editActionsForRowAtIndexPath:;
- (double)tableView:heightForFooterInSection:;
- (id)tableView:viewForFooterInSection:;
- (BOOL)isCurrentUser;
- (void)setupUI;
- (id)playlistID;
- (id)dataController;
- (id)bottomContainerView;
- (void)setBottomContainerView:;
@end
