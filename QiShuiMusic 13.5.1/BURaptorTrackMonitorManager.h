@interface BURaptorTrackMonitorManager : NSObject
@property (nonatomic) NSMutableDictionary pseudoTLSDictionary;
@property (nonatomic) NSObject<OS_dispatch_queue> serialQueue;
- (void)_pbu_logTracker:;
- (id)_statsParamsWithType:eventExtra:;
- (void)buRaptorTrackMonitorManager_ExceptionTracker:;
- (id)pseudoTLSDictionary;
- (void)setPseudoTLSDictionary:;
- (id)init;
- (id)serialQueue;
- (void)setup;
- (void).cxx_destruct;
- (void)setSerialQueue:;
+ (id)sharedInstance;
@end
