@interface MAAutoAssetControlStatistics : NSObject
@property (nonatomic) MAAutoAssetControlStatisticsByCommand totalClientRequests;
@property (nonatomic) MAAutoAssetControlStatisticsByCommand totalClientRepliesSuccess;
@property (nonatomic) MAAutoAssetControlStatisticsByCommand totalClientRepliesFailure;
@property (nonatomic) MAAutoAssetControlStatisticsByCommand totalQueuedClientRequests;
@property (nonatomic) MAAutoAssetControlStatisticsByCommand totalDequeuedClientRequests;
@property (nonatomic) q totalAutoAssetJobsStarted;
@property (nonatomic) q totalAutoJobsFinished;
@property (nonatomic) q totalStagerDetermineJobsStarted;
@property (nonatomic) q totalStagerDetermineJobsFinished;
@property (nonatomic) q totalStagerDownloadJobsStarted;
@property (nonatomic) q totalStagerDownloadJobsFinished;
@property (nonatomic) q totalResumedInFlightJobs;
@property (nonatomic) q totalSchedulerTriggeredJobs;
@property (nonatomic) q totalFailuresToStartJobs;
@property (nonatomic) MAAutoAssetControlStatisticsBySize previouslyDownloaded;
@property (nonatomic) MAAutoAssetControlStatisticsBySize totalDownloaded;
@property (nonatomic) MAAutoAssetControlStatisticsBySize totalStaged;
@property (nonatomic) MAAutoAssetControlStatisticsBySize totalUnstaged;
@property (nonatomic) MAAutoAssetControlStatisticsBySize totalPromoted;
@property (nonatomic) MAAutoAssetControlStatisticsBySize totalRemoved;
@property (nonatomic) BOOL garbageCollectionPerformed;
@property (nonatomic) BOOL garbageCollectionReclaimSpace;
@property (nonatomic) q garbageCollectionTotalReclaimedSpace;
@property (nonatomic) q garbageCollectionReclaimedV2AssetCount;
@property (nonatomic) q garbageCollectionReclaimedV2AssetSpace;
@property (nonatomic) q garbageCollectionReclaimedUnlockedCount;
@property (nonatomic) q garbageCollectionReclaimedUnlockedSpace;
@property (nonatomic) q garbageCollectionReclaimedLockedOverridableCount;
@property (nonatomic) q garbageCollectionReclaimedLockedOverridableSpace;
@property (nonatomic) q garbageCollectionReclaimedLockedNeverRemoveCount;
@property (nonatomic) q garbageCollectionReclaimedLockedNeverRemoveSpace;
@property (nonatomic) q garbageCollectionReclaimedStagedCount;
@property (nonatomic) q garbageCollectionReclaimedStagedSpace;
@property (nonatomic) q garbageCollectionReclaimedMetadataBlockedCount;
@property (nonatomic) q garbageCollectionReclaimedMetadataBlockedSpace;
- (id)totalDequeuedClientRequests;
- (long long)garbageCollectionReclaimedLockedNeverRemoveSpace;
- (id)init;
- (void)setGarbageCollectionTotalReclaimedSpace:;
- (void)setTotalAutoAssetJobsStarted:;
- (long long)garbageCollectionReclaimedV2AssetCount;
- (id)initWithInitialValue:;
- (id)totalStaged;
- (long long)garbageCollectionReclaimedUnlockedSpace;
- (void)setGarbageCollectionReclaimedLockedOverridableCount:;
- (id)copy;
- (long long)totalResumedInFlightJobs;
- (BOOL)garbageCollectionReclaimSpace;
- (void)setGarbageCollectionReclaimedV2AssetSpace:;
- (long long)garbageCollectionReclaimedStagedSpace;
- (long long)totalSchedulerTriggeredJobs;
- (id)totalClientRepliesSuccess;
- (void)setTotalClientRequests:;
- (id)totalClientRepliesFailure;
- (void)setTotalUnstaged:;
- (void)setGarbageCollectionReclaimedUnlockedCount:;
- (long long)garbageCollectionReclaimedUnlockedCount;
- (void)setTotalAutoJobsFinished:;
- (void)setTotalPromoted:;
- (id)initWithCoder:;
- (long long)garbageCollectionTotalReclaimedSpace;
- (void)setTotalQueuedClientRequests:;
- (long long)totalStagerDownloadJobsFinished;
- (void)setTotalDownloaded:;
- (long long)garbageCollectionReclaimedMetadataBlockedSpace;
- (long long)garbageCollectionReclaimedV2AssetSpace;
- (void)setGarbageCollectionReclaimedUnlockedSpace:;
- (void)setTotalClientRepliesFailure:;
- (void)setGarbageCollectionReclaimedMetadataBlockedCount:;
- (BOOL)garbageCollectionPerformed;
- (long long)totalStagerDetermineJobsStarted;
- (id)previouslyDownloaded;
- (void)setGarbageCollectionReclaimedStagedSpace:;
- (void)encodeWithCoder:;
- (void)setTotalStaged:;
- (void)setGarbageCollectionReclaimedMetadataBlockedSpace:;
- (void)setGarbageCollectionReclaimedLockedNeverRemoveCount:;
- (id)totalRemoved;
- (id)totalDownloaded;
- (id)summary;
- (id)totalQueuedClientRequests;
- (long long)garbageCollectionReclaimedLockedOverridableSpace;
- (id)totalClientRequests;
- (void)setGarbageCollectionReclaimSpace:;
- (long long)garbageCollectionReclaimedLockedNeverRemoveCount;
- (void)setGarbageCollectionReclaimedV2AssetCount:;
- (long long)totalAutoJobsFinished;
- (void).cxx_destruct;
- (void)setGarbageCollectionReclaimedLockedNeverRemoveSpace:;
- (id)totalUnstaged;
- (void)setGarbageCollectionPerformed:;
- (void)setPreviouslyDownloaded:;
- (void)setTotalClientRepliesSuccess:;
- (void)setTotalDequeuedClientRequests:;
- (void)setTotalFailuresToStartJobs:;
- (long long)totalFailuresToStartJobs;
- (long long)garbageCollectionReclaimedStagedCount;
- (id)description;
- (void)setGarbageCollectionReclaimedLockedOverridableSpace:;
- (long long)totalStagerDownloadJobsStarted;
- (long long)totalStagerDetermineJobsFinished;
- (void)setTotalStagerDetermineJobsFinished:;
- (void)setTotalRemoved:;
- (void)setTotalStagerDetermineJobsStarted:;
- (void)setTotalStagerDownloadJobsFinished:;
- (void)setGarbageCollectionReclaimedStagedCount:;
- (void)setTotalSchedulerTriggeredJobs:;
- (id)totalPromoted;
- (void)setTotalResumedInFlightJobs:;
- (long long)totalAutoAssetJobsStarted;
- (void)setTotalStagerDownloadJobsStarted:;
- (long long)garbageCollectionReclaimedMetadataBlockedCount;
- (long long)garbageCollectionReclaimedLockedOverridableCount;
+ (BOOL)supportsSecureCoding;
+ (id)allocStringForBytes:;
@end
