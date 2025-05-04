@interface AWEOpenPlatformActionTrackerManager : NSObject
@property (nonatomic) AWEStorage storage;
@property (nonatomic) NSMutableSet uniqueIDSet;
@property (nonatomic) NSObject<OS_dispatch_queue> serialQueue;
- (void)addNotifications;
- (void)setUniqueIDSet:;
- (BOOL)enableAction;
- (void)setTrackParams:WithUniqueID:;
- (id)uniqueIDSet;
- (id)getTrackerParamsFromUniqueID:;
- (id)handleTrackParams:;
- (void)removeTrackParamsWithUniqueID:;
- (id)dateWithStage:reverse:withStages:timeStamp:;
- (void)updateParams:withUniqueID:;
- (void)uploadLocalTrackerWithUniqueID:;
- (void)tryUploadAllLocalTracker;
- (void)createLocalTrackerWithName:withUniqueID:;
- (void)updateStage:withUniqueID:;
- (void)setStorage:;
- (id)init;
- (id)storage;
- (id)serialQueue;
- (void)setSerialQueue:;
- (void).cxx_destruct;
- (void)appWillEnterForeground;
+ (id)shareManager;
@end
