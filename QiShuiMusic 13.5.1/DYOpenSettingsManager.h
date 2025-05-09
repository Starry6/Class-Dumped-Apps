@interface DYOpenSettingsManager : NSObject
@property (nonatomic) NSDictionary settings;
@property (nonatomic) q lastSettingsTime;
@property (nonatomic) NSDictionary vidInfo;
@property (nonatomic) NSString ctxInfos;
@property (nonatomic) NSDictionary backupSettings;
@property (nonatomic) NSMutableDictionary lockSettings;
@property (nonatomic) NSMutableDictionary mockSettings;
@property (nonatomic) BOOL succeedRequest;
@property (nonatomic) BOOL requesting;
@property (nonatomic) NSMutableArray completionArray;
@property (nonatomic) <DYOpenKVInterface> storage;
@property (nonatomic) FMDatabaseQueue dbQueue;
@property (nonatomic) double lastRequestCPUTime;
@property (nonatomic) NSDictionary firstGetValueParams;
@property (nonatomic) NSInteger randomIndex;
- (id)completionArray;
- (void)exposeToABTest:;
- (void)requestSettings;
- (void)setRandomIndex:;
- (id)vidInfo;
- (id)backupSettings;
- (void)createFolderIfNeed:;
- (id)ctxInfos;
- (void)excuteInTransaction:;
- (id)firstGetValueParams;
- (id)getCtxInfos;
- (id)getSettingDict;
- (void)handleRequestResultWithData:error:shouldCache:;
- (double)lastRequestCPUTime;
- (long long)lastSettingsTime;
- (id)lockSettings;
- (id)mockSettings;
- (int)randomIndex;
- (BOOL)requesting;
- (id)s_arrayValueForKey:;
- (BOOL)s_boolValueForKey:;
- (id)s_dictionaryValueForKey:;
- (float)s_floatValueForKey:;
- (long long)s_integerValueForKey:;
- (long long)s_integerValueForKey:defaultInteger:;
- (id)s_objectValueForKey:;
- (id)s_stringValueForKey:;
- (void)saveSettings:ctxInfos:settingsTime:;
- (void)setBackupSettings:;
- (void)setCompletionArray:;
- (void)setCtxInfos:;
- (void)setFirstGetValueParams:;
- (void)setLastRequestCPUTime:;
- (void)setLastSettingsTime:;
- (void)setLockSettings:;
- (void)setMockSettings:;
- (void)setRequesting:;
- (void)setSucceedRequest:;
- (void)setVidInfo:;
- (void)setupDefaultSettings;
- (BOOL)succeedRequest;
- (id)transToJson:;
- (id)init;
- (id)settings;
- (void)setSettings:;
- (void)setStorage:;
- (id)storage;
- (void).cxx_destruct;
- (void)setupStorage;
- (id)dbQueue;
- (void)setDbQueue:;
+ (id)sharedManager;
@end
