@interface AWENqeTTNetAdaptor : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> serial_queue;
@property (nonatomic) NSMutableArray nqeManager;
@property (nonatomic) AWENetworkQuailtyModel sharedNqeModel;
- (void)handleReachabilityChangedNotification:;
- (void)addNetworkQuailityManager:;
- (void)removeNetworkQuailityManager:;
- (id)fetchCurrentQuailtyModel;
- (void)p_handleNeqChangeActionRtt:transportRtt:downstreamThroughputKbps:;
- (void)p_handlePacageLossRateWithNetProtocol:upLossRate:upLossRateVari:downLossRate:downLossRateVari:;
- (void)setNqeManager:;
- (void)setSharedNqeModel:;
- (id)sharedNqeModel;
- (void)p_handleNeqLevelChangeNotification:;
- (id)nqeManager;
- (id)init;
- (void).cxx_destruct;
- (void)notifyObserver;
- (id)serial_queue;
- (void)setSerial_queue:;
+ (id)shared;
@end
