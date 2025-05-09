@interface AWEFeedOfflineGuideV2Controller : AWEBaseController
@property (nonatomic) AWEBinding stateVCBinding;
@property (nonatomic) AWEBinding cachesAlreadyBinding;
@property (nonatomic) BOOL hasInsertOfflineGuideCell;
@property (nonatomic) BOOL isColdLaunchGuideCell;
@property (nonatomic) BOOL isNormalGuideCell;
@property (nonatomic) BOOL hasAutoAppendOfflineVideos;
@property (nonatomic) q appendPageCount;
@property (nonatomic) q appendedIndex;
@property (nonatomic) AWEAwemeModel guideModel;
@property (nonatomic) AWEAwemeModel tapOfflineTipsModel;
@property (nonatomic) BOOL isFeedVCAppear;
@property (nonatomic) q lastAwemeType;
@property (nonatomic) BOOL clickOfflineTips;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)guideModel;
- (void)setGuideModel:;
- (void)onDataSourceReload;
- (void)initialFetchCompletion:error:;
- (void)loadMoreCompletion:error:isFooterRefreshing:;
- (void)p_handleConnectionChanged:;
- (id)stateVCBinding;
- (void)setStateVCBinding:;
- (id)cachesAlreadyBinding;
- (void)setCachesAlreadyBinding:;
- (void)onStartPlayOfflineAwemeModelWithEnterFrom:;
- (void)onScrollTopGuideCellWithEnterFrom:awemeModel:;
- (void)setLastAwemeType:;
- (void)setClickOfflineTips:;
- (void)setAppendPageCount:;
- (void)p_applicationWillTerminate;
- (void)p_showColdLaunchOfflineGuideV2CellIfNeeded;
- (void)p_resetViewControllerStateIfNeeded;
- (void)p_removeOfflineGuideV2CellIfNeeded;
- (void)setHasInsertOfflineGuideCell:;
- (void)setIsColdLaunchGuideCell:;
- (void)setIsNormalGuideCell:;
- (void)setHasAutoAppendOfflineVideos:;
- (void)p_appendOfflineAwemeModelsToFeedWithShouldScrollToNext:;
- (BOOL)hasInsertOfflineGuideCell;
- (void)p_showNormalOfflineGuideV2CellIfNeeded;
- (long long)lastAwemeType;
- (BOOL)isColdLaunchGuideCell;
- (BOOL)isNormalGuideCell;
- (BOOL)hasAutoAppendOfflineVideos;
- (void)p_trackEnterOfflineModelWithEnterFrom:;
- (BOOL)clickOfflineTips;
- (void)p_trackExitOfflineModeWithExitMethod:;
- (BOOL)hasOfflineDownloadVideo;
- (BOOL)p_offlineGuideEnable;
- (void)p_cleanOfflineCacheIfNeeded;
- (void)p_trackOfflineModelStatusWithEnterFrom:;
- (void)p_showNormalOfflineGuideV2CellIfNeededAtIndex:;
- (long long)appendedIndex;
- (void)setAppendedIndex:;
- (BOOL)isFeedVCAppear;
- (long long)appendPageCount;
- (void)p_updateOfflineModeUserID;
- (void)setIsFeedVCAppear:;
- (void)p_onRecordOfflineVideoPlay:;
- (id)p_enterFrom;
- (id)tapOfflineTipsModel;
- (void)setTapOfflineTipsModel:;
- (void)dealloc;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)tableView:didEndDisplayingCell:forRowAtIndexPath:;
- (void)viewDidAppear;
- (void)viewDidDisappear;
@end
