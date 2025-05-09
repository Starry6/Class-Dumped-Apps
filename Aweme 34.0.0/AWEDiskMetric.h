@interface AWEDiskMetric : NSObject
@property (nonatomic) NSMutableDictionary infos;
@property (nonatomic) NSMutableArray diskInfoParams;
@property (nonatomic) q pathTotal;
@property (nonatomic) q pathCount;
@property (nonatomic) q segmentSize;
@property (nonatomic) q collectionDepth;
@property (nonatomic) NSDictionary customCollectionDepthConfig;
@property (nonatomic) AWEStorage universalStorage;
@property (nonatomic) BOOL collectionEnable;
@property (nonatomic) BOOL newMetricFormatEnable;
@property (nonatomic) BOOL useAllocatedDiskSize;
@property (nonatomic) BOOL tracking;
@property (nonatomic) NSDate lastTrack;
@property (nonatomic) NSObject<OS_dispatch_queue> diskMonitorQueue;
@property (nonatomic) NSObject<OS_dispatch_semaphore> semaphore;
@property (nonatomic) NSArray resourceMetricPaths;
@property (nonatomic) NSArray cleanPaths;
@property (nonatomic) NSArray expiredDays;
@property (nonatomic) NSMutableDictionary resourceMetric;
@property (nonatomic) BOOL shouldPauseTrack;
@property (nonatomic) <AWEDiskMetricDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)universalStorage;
- (void)visitFile:size:lastAccessDate:deepLevel:;
- (void)visitDirectory:size:deepLevel:;
- (id)expiredDays;
- (void)setExpiredDays:;
- (void)setResourceMetric:;
- (id)resourceMetric;
- (id)cleanPaths;
- (void)setUniversalStorage:;
- (BOOL)useAllocatedDiskSize;
- (void)setLastTrack:;
- (id)diskMonitorQueue;
- (void)trackInternal;
- (BOOL)newMetricFormatEnable;
- (void)setCleanPaths:;
- (id)diskInfoParams;
- (long long)pathTotal;
- (id)lastTrack;
- (void)setPathTotal:;
- (id)shouldMetricResource:;
- (id)expiredDictionaryByUpdateDictionary:expiredInterval:size:;
- (long long)customDepthForPath:;
- (id)resourceMetricPaths;
- (long long)collectionDepth;
- (id)customCollectionDepthConfig;
- (BOOL)shouldPauseTrack;
- (void)calculateResourceUtilizationWithPath:size:deepLevel:;
- (id)resourceAttributeWithPath:size:;
- (void)addDiskItemInfo:attribute:;
- (void)recordPath:size:deepLevel:isDir:;
- (void)trackIfNeed;
- (id)fetchDirectoryInfoWithPath:;
- (void)setShouldPauseTrack:;
- (BOOL)collectionEnable;
- (void)setCollectionEnable:;
- (void)setDiskInfoParams:;
- (void)setSegmentSize:;
- (void)setCollectionDepth:;
- (void)setCustomCollectionDepthConfig:;
- (void)setNewMetricFormatEnable:;
- (void)setUseAllocatedDiskSize:;
- (void)setDiskMonitorQueue:;
- (void)setResourceMetricPaths:;
- (id)timestamp;
- (id)semaphore;
- (id)infos;
- (id)init;
- (id)delegate;
- (BOOL)isTracking;
- (void)setSemaphore:;
- (long long)segmentSize;
- (void).cxx_destruct;
- (void)setDelegate:;
- (void)setTracking:;
- (long long)pathCount;
- (BOOL)shouldTrack;
- (void)setInfos:;
- (void)setPathCount:;
@end
