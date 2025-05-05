@interface IESLiveRequestMonitor : NSObject
@property (nonatomic) NSTimer enterRoomTimer;
@property (nonatomic) NSTimer loadMoreTimer;
@property (nonatomic) BOOL isWifiToCellular;
@property (nonatomic) BOOL isTriggerNetSwitch;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)beginMonitorWithMonitorType:;
- (void)didChangeToCellularTransData:;
- (void)didChangeToDefaultTransData:;
- (void)endMonitorWithMonitorType:;
- (id)enterRoomTimer;
- (BOOL)isTriggerNetSwitch;
- (BOOL)isTriggerWifiSwitchToCellular;
- (BOOL)isWifiToCellular;
- (id)loadMoreTimer;
- (void)setEnterRoomTimer:;
- (void)setIsTriggerNetSwitch:;
- (void)setIsWifiToCellular:;
- (void)setLoadMoreTimer:;
- (void)triggerSwitchingWithMonitorType:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
+ (id)sharedManager;
@end
