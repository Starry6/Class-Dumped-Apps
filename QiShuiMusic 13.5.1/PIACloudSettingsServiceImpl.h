@interface PIACloudSettingsServiceImpl : NSObject
@property (nonatomic) NSDictionary settings;
@property (nonatomic) double lastFetchSuccessfullyTime;
@property (nonatomic) NSRecursiveLock locker;
@property (nonatomic) NSRecursiveLock observerLocker;
@property (nonatomic) NSMutableArray observers;
- (void)fetchCloudSettings:;
- (id)generateCloudSettingsRequestParameters;
- (id)getOriginSettings;
- (double)lastFetchSuccessfullyTime;
- (id)locker;
- (id)observerLocker;
- (void)registerSettingHandler:;
- (void)setLastFetchSuccessfullyTime:;
- (void)setLocker:;
- (void)setObserverLocker:;
- (id)updateDataBaseFromSettings:;
- (id)objectValueForKey:;
- (id)init;
- (id)settings;
- (void)setSettings:;
- (void).cxx_destruct;
- (void)setObservers:;
- (id)observers;
+ (id)sharedInstance;
@end
