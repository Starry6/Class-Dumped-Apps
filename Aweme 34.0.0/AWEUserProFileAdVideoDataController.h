@interface AWEUserProFileAdVideoDataController : NSObject
@property (nonatomic) AWEUserProfileAdDataLayer dataLayer;
@property (nonatomic) NSTimer adGapTimer;
@property (nonatomic) AWEAwemeModel adGapWillChangePreModel;
@property (nonatomic) AWEAwemeModel adGapWillChangeTargetModel;
@property (nonatomic) NSDictionary currentGapInfo;
@property (nonatomic) NSArray adGapSettings;
@property (nonatomic) BOOL shouldChangeAdGapInNextInsertOperation;
@property (nonatomic) BOOL isInsertingVideos;
@property (nonatomic) NSMutableArray insertModelsBuffer;
@property (nonatomic) Q slotAdType;
@property (nonatomic) NSMutableIndexSet mixIndexSet;
@property (nonatomic) BOOL isMixSlideDownInitalFetchCompleted;
@property (nonatomic) BOOL isMixSlideUpInitalFetchCompleted;
@property (nonatomic) q initalElementStatus;
@property (nonatomic) NSMutableDictionary outFlowExtraInfo;
@property (nonatomic) NSDictionary customAdRequestCountABTestInfo;
@property (nonatomic) AWEAwemeModel lastShowAdModel;
@property (nonatomic) BOOL enableInsertAdsOptimize;
@property (nonatomic) q curIndex;
@property (nonatomic) q initialIndex;
@property (nonatomic) AWESegmentListSubSegment initialSlotSubSegment;
@property (nonatomic) AWESegmentListSubSegment curSlotSubSegment;
@property (nonatomic) AWESegmentListSubSegment nextSlotSubSegment;
@property (nonatomic) Q verticalScrollDirection;
@property (nonatomic) BOOL isInitalFetchCompleted;
@property (nonatomic) NSMutableArray rawDataSource;
@property (nonatomic) NSMutableArray adVideoItemIDs;
@property (nonatomic) <AWEHttpTask> httpTask;
@property (nonatomic) BOOL isVideoDetailShowing;
@property (nonatomic) NSMutableArray insertModels;
@property (nonatomic) BOOL hasFindInitialAwemeInPostParams;
@property (nonatomic) BOOL isBigIndexLocateToJustWatchedItemStartRequest;
@property (nonatomic) BOOL isInsertAdModelFail;
@property (nonatomic) AWEUserModel user;
@property (nonatomic) BOOL isUserFingureDragging;
@property (nonatomic) @? userProfileInsertAdVideoDetailBlock;
@property (nonatomic) BOOL isDetailVCAnimating;
@property (nonatomic) UIViewController<AWEAwemeDetailTableViewControllerProtocol> detailVC;
@property (nonatomic) AWEAwemeModel initialAwemeModel;
@property (nonatomic) AWEAwemeModel currentModel;
@property (nonatomic) NSMutableArray adModels;
@property (nonatomic) BOOL profileAdPreloadEnable;
@property (nonatomic) NSString entranceID;
@property (nonatomic) NSString outFlowEnterFrom;
@property (nonatomic) Q entranceType;
@property (nonatomic) Q userRelationType;
@property (nonatomic) BOOL detailVCIsDeletingVideo;
@property (nonatomic) BOOL isPerfPagingEnable;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)curIndex;
- (unsigned long long)slotAdType;
- (void)setCurIndex:;
- (void)setHttpTask:;
- (id)httpTask;
- (unsigned long long)entranceType;
- (void)setEntranceType:;
- (void)updateProfileAdPreloadEnableStatus:;
- (void)rawDataSourceClear;
- (long long)rawDataIndexWithoutAdVideo:;
- (void)userProfileVideoSwitchWithIndex:awemeModel:;
- (void)startShowUserProfileAwemeDetailWithInitalIndex:;
- (void)refreshDataSourceWithRawAwemeModels:;
- (id)adVideoItemIDs;
- (void)clearAdVideoData;
- (void)resetFetchDataTaskIfNeed;
- (BOOL)isEnableInsertAdVideoInUserProfile;
- (void)videoWillDisplayWithModel:index:;
- (void)tryChangeAdShowTimeGapIfNeed:index:;
- (void)trackMonitorEvent:creativeID:adExtraData:;
- (void)startShowMixDetailWithAwemeModel:;
- (void)mixVideoSwitchWithIndex:awemeModel:;
- (void)refreshDataSourceWithRawMixAwemeDetail:atFront:;
- (void)updateOriginalTableViewHeight:;
- (double)originalTableViewHeight;
- (double)recaculateScrollContentOffsetWithScrollingVelocity:contentOffset:maxOffsetY:;
- (void)tryUpdateAdCellHeight:;
- (double)cellHeightWithAdModel:;
- (long long)adLiveStreamShowCount;
- (long long)indexFromContentOffsetY:;
- (double)startOffsetFromIndex:;
- (void)tryRebuildAdLiveStreamPreCount;
- (BOOL)isUserFingureDragging;
- (void)setIsUserFingureDragging:;
- (id)userProfileInsertAdVideoDetailBlock;
- (void)setUserProfileInsertAdVideoDetailBlock:;
- (BOOL)isBigIndexLocateToJustWatchedItemStartRequest;
- (void)setIsBigIndexLocateToJustWatchedItemStartRequest:;
- (BOOL)isInsertAdModelFail;
- (void)setIsInsertAdModelFail:;
- (BOOL)isDetailVCAnimating;
- (void)setIsDetailVCAnimating:;
- (id)detailVC;
- (void)setDetailVC:;
- (id)initialAwemeModel;
- (void)setInitialAwemeModel:;
- (id)adModels;
- (void)setAdModels:;
- (BOOL)profileAdPreloadEnable;
- (void)setProfileAdPreloadEnable:;
- (id)entranceID;
- (void)setEntranceID:;
- (id)outFlowEnterFrom;
- (void)setOutFlowEnterFrom:;
- (unsigned long long)userRelationType;
- (void)setUserRelationType:;
- (BOOL)detailVCIsDeletingVideo;
- (void)setDetailVCIsDeletingVideo:;
- (BOOL)isPerfPagingEnable;
- (void)setIsPerfPagingEnable:;
- (void)trackAdGapInfoWithIndex:;
- (void)setupAdGapSettings;
- (void)_onAwemeDeleteNotification:;
- (void)setCustomAdRequestCountABTestInfo:;
- (void)setEnableInsertAdsOptimize:;
- (void)cancelAdGapTimer;
- (id)dataLayer;
- (id)insertModels;
- (id)insertModelsBuffer;
- (BOOL)isInsertingVideos;
- (void)setIsInsertingVideos:;
- (unsigned long long)verticalScrollDirection;
- (id)adGapWillChangeTargetModel;
- (BOOL)shouldChangeAdGapInNextInsertOperation;
- (BOOL)tryChangeAdGapIfNeed;
- (void)setShouldChangeAdGapInNextInsertOperation:;
- (id)rawDataSource;
- (void)setupInitalSlotModelsWithScrollDirection:index:;
- (void)setCurSlotSubSegment:;
- (void)tryInsertModels;
- (BOOL)canRequestAdVideoRightNow;
- (BOOL)isInitalFetchCompleted;
- (void)startFetchAdVideoData:;
- (id)curSlotSubSegment;
- (void)setNextSlotSubSegment:;
- (id)customAdRequestCountABTestInfo;
- (BOOL)hasFindInitialAwemeInPostParams;
- (void)optimizeNetworkRequestWithInitalIndex:verticalScrollDirection:;
- (void)setVerticalScrollDirection:;
- (void)setInitialSlotSubSegment:;
- (id)initialSlotSubSegment;
- (void)setHasFindInitialAwemeInPostParams:;
- (void)setSlotAdType:;
- (void)setIsInitalFetchCompleted:;
- (void)setAdVideoItemIDs:;
- (void)setIsVideoDetailShowing:;
- (BOOL)isLastFetchTaskCompleted;
- (id)nextSlotSubSegment;
- (void)updateRequestOutFlowInfo;
- (id)networkRequestParams;
- (void)trackReceiveAdItemWithModel:;
- (BOOL)disableAdLiveStreamInProfile;
- (id)initalRequestResultSlotArrayWithResponseModel:verticalScrollDirection:;
- (BOOL)enableInsertAdsOptimize;
- (BOOL)canRequestMixInfoAds;
- (id)outFlowExtraInfo;
- (id)slotsParamItemSeqsWithSlotSeqModel:;
- (void)setOutFlowExtraInfo:;
- (long long)adShowTimeGap;
- (void)cancelAdShowTimeGapTimer;
- (void)setAdGapSettings:;
- (id)adGapSettings;
- (void)checkAdGapStateWith:index:;
- (id)adGapTimer;
- (void)setAdGapWillChangePreModel:;
- (void)setAdGapWillChangeTargetModel:;
- (void)setCurrentGapInfo:;
- (void)adGapChangeTimerTask:;
- (void)setAdGapTimer:;
- (id)currentGapInfo;
- (id)adGapWillChangePreModel;
- (void)clearAdGapInfo;
- (id)lastShowAdModel;
- (void)setLastShowAdModel:;
- (long long)initalElementStatus;
- (void)resetInitialSlotSegmentStatus:;
- (BOOL)isMixSlideDownInitalFetchCompleted;
- (void)setIsMixSlideDownInitalFetchCompleted:;
- (void)mixInitalFetchWithCompletion:;
- (BOOL)isMixSlideUpInitalFetchCompleted;
- (void)setIsMixSlideUpInitalFetchCompleted:;
- (void)setInitalElementStatus:;
- (void)mixSetupInitalSlotModelsIfNeed;
- (id)mixIndexSet;
- (void)setRawDataSource:;
- (BOOL)isVideoDetailShowing;
- (void)setInsertModels:;
- (void)setDataLayer:;
- (void)setInsertModelsBuffer:;
- (void)setMixIndexSet:;
- (id)user;
- (void)setUser:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)baseURL;
- (id)currentModel;
- (void)setCurrentModel:;
- (long long)initialIndex;
- (void)setInitialIndex:;
+ (id)profileDetailVideoAdGuideTagTextIfSlideDown:;
+ (long long)adGuideTagShowType;
+ (BOOL)canShowProfileTipsBarWithModel:;
+ (long long)profileAdsTipsBarType;
+ (id)profileAdsTipsBarText;
+ (long long)profileAdsPreRequestCount;
@end
