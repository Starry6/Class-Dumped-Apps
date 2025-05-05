@interface DYOpenABTestManager : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> serialQueue;
@property (nonatomic) DYOpenDBStorage storage;
@property (nonatomic) NSMutableSet exposedVids;
- (void)setExposedVids:;
- (void)createFolderIfNeed:;
- (void)exposeABTest:;
- (id)exposedVids;
- (id)exposureVidString;
- (id)getExposureVidString;
- (void)handleVidInfo:;
- (void)removeExposureVidString;
- (void)saveExposureVidString:;
- (void)updateExposureVidStringBySet:;
- (id)init;
- (void)setStorage:;
- (id)serialQueue;
- (id)storage;
- (void).cxx_destruct;
- (void)setupStorage;
- (void)setSerialQueue:;
+ (id)sharedManager;
@end
