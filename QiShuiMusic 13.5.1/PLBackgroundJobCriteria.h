@interface PLBackgroundJobCriteria : NSObject
@property (nonatomic) NSString shortCode;
@property (nonatomic) NSString name;
@property (nonatomic) NSString activityIdentifier;
- (id)activityIdentifier;
- (id)shortCode;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (id)initWithName:shortCode:xpcActivityPriority:allowBattery:gracePeriod:requireScreenSleep:cpuIntensive:requireInexpensiveNetworkConnectivity:requireConcurrencyLimit:overrideRateLimiting:;
- (id)name;
- (BOOL)isEqual:;
- (id)xpcCriteria;
- (id)copyWithZone:;
+ (id)allKnownShortCodes;
+ (id)criteriaForHubbleNetworkDownloadWorker;
+ (id)criteriaForRebuildSearchWorker;
+ (id)criteriaForUrgentResourceWorker;
+ (id)criteriaWithKnownShortCode:;
+ (id)criteriaForHubbleWorker;
+ (id)criteriaForIncrementalSearchWorker;
+ (id)criteriaForDuplicateDetectorWorker;
+ (id)allKnownCriterias;
+ (id)criteriaForDiscretionaryResourceWorker;
@end
