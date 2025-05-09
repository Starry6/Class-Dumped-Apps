@interface AWEGurdSettingsManager : NSObject
@property (nonatomic) double freeSpace;
@property (nonatomic) BOOL blockAllResource;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)awemeSettingDidChange;
- (long long)monitorFlushCount;
- (void)configGurdSettings;
- (void)abTestConfigurationChanged;
- (void)startResourceMetric;
- (void)setNeedFixDownloadApplyDeadlock;
- (void)setGeckoTimerOpt;
- (void)configExpiredChannels;
- (void)configRequestBlocklist;
- (void)setPreChannel;
- (void)geckoSetOndemandExperiment;
- (id)aAWEGurdSettingsManagerCommonAdapter;
- (void)activityResourceOptimize;
- (void)geckoOptimizeForLowSpace;
- (void)geckoOptimizeForSensitiveStorage;
- (void)geckoOptimizeForSensitiveStorageLabel;
- (void)lowSpaceExploring;
- (void)resourcePreloadSchedule;
- (BOOL)blockAllResource;
- (BOOL)enableCleanExtremelyTask;
- (void)blockAllResourcePreload;
- (void)addLowSpaceOptimizeWhiteList:;
- (void)setBlockAllResource:;
- (void)resumeDownloadIfNeeded;
- (BOOL)firstLaunchAfter:;
- (void)configRequestBlocklistWithStatus:;
- (BOOL)isGurdEnabled;
- (void)resourcePreloadScheduleStateDidChange:;
- (id)resourcePreloadScheduleQueue;
- (BOOL)isNetworkDelegateEnabled;
- (BOOL)onDemandEnableWithLaunchDays:;
- (void)dealloc;
- (double)freeSpace;
- (void)setFreeSpace:;
+ (Class)aAWEGurdSettingsManagerCommonAdapterClass;
+ (BOOL)gurdEnable;
+ (void)setGurdEnable:;
+ (void)setup;
+ (id)sharedManager;
@end
