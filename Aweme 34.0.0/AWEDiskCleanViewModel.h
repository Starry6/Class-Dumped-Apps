@interface AWEDiskCleanViewModel : NSObject
@property (nonatomic) NSLock cleanLock;
@property (nonatomic) NSObject<OS_dispatch_queue> workQueue;
@property (nonatomic) double draftsSize;
@property (nonatomic) q draftCount;
@property (nonatomic) double chatSize;
@property (nonatomic) BOOL chatSizeInited;
@property (nonatomic) @? overallcalculateProgress;
@property (nonatomic) @? overallCalculateCompletion;
@property (nonatomic) @? businessCalculateCompletion;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSArray datas;
@property (nonatomic) double cacheSize;
@property (nonatomic) double offlineVideoSize;
@property (nonatomic) double necessarySize;
@property (nonatomic) double appSize;
@property (nonatomic) double totalSize;
@property (nonatomic) double availableSize;
@property (nonatomic) BOOL tracked;
@property (nonatomic) AWEPerformanceDiskStatistics cleanStatistics;
@property (nonatomic) NSDate lastCleanupDate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setEnterFrom:;
- (id)enterFrom;
- (void)setAppSize:;
- (id)cleanStatistics;
- (void)setCleanStatistics:;
- (double)offlineVideoSize;
- (void)draftHasTransitionedNormalByUserWithDraftId:launchFrom:extraInfo:;
- (void)observeDeleteDrafts;
- (void)observeChatSize;
- (void)updateDraftSize;
- (void)updateOfflineVideoSize;
- (void)updateOldOfflineVideoSize;
- (BOOL)isChatManualCleanup;
- (id)chatDiskManageTitle;
- (id)chatDiskManageSubtitle;
- (BOOL)chatSizeInited;
- (void)updateChatSize:;
- (void)setDraftsSize:;
- (long long)draftCount;
- (void)setDraftCount:;
- (void)constructAllDatas;
- (void)setChatSize:;
- (void)setChatSizeInited:;
- (void)setAvailableSize:;
- (id)overallCalculateCompletion;
- (id)businessCalculateCompletion;
- (double)draftsSize;
- (void)updateDiskSize:;
- (double)chatSize;
- (BOOL)isDiskManualCleanup;
- (void)setOfflineVideoSize:;
- (double)necessarySize;
- (id)lastCleanupDate;
- (double)sizeStatsCooldown;
- (void)setLastCleanupDate:;
- (id)initWithDiskOverallCalculateProgress:overallCalculateCompletion:businessCalculateCompletion:;
- (void)initDetailData;
- (void)prepareCacheData;
- (void)prepareDraftsData;
- (void)prepareChatData;
- (void)cleanResourceWithCleanType:completion:;
- (void)cleanResourceWithCleanType:checkCancelForProgress:completion:;
- (id)constructCleanModelWithTitle:detail:desc:type:haveCache:;
- (void)trackDeviceData;
- (BOOL)needCountSize;
- (void)setNecessarySize:;
- (id)cleanLock;
- (void)setCleanLock:;
- (id)overallcalculateProgress;
- (void)setOverallcalculateProgress:;
- (void)setOverallCalculateCompletion:;
- (void)setBusinessCalculateCompletion:;
- (double)cacheSize;
- (void)dealloc;
- (id)workQueue;
- (double)availableSize;
- (BOOL)tracked;
- (void)setWorkQueue:;
- (void)setTracked:;
- (void).cxx_destruct;
- (void)setCacheSize:;
- (double)totalSize;
- (id)datas;
- (void)setDatas:;
- (void)setTotalSize:;
- (double)appSize;
@end
