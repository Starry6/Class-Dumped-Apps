@interface TTNetworkMonitor : NSObject
@property (nonatomic) I latestWifiIfIndex;
@property (nonatomic) I latestCellIfIndex;
@property (nonatomic) NSString latestGatewayAddress;
@property (nonatomic) BOOL monitorStarted;
@property (nonatomic) NSInteger defaultConnectionType;
- (void)UpdateGatewayAddress:;
- (void)UpdateNetworkIfIndexForWiFi:Cell:;
- (int)defaultConnectionType;
- (unsigned int)latestCellIfIndex;
- (id)latestGatewayAddress;
- (unsigned int)latestWifiIfIndex;
- (BOOL)monitorStarted;
- (void)setDefaultConnectionType:;
- (void)setLatestCellIfIndex:;
- (void)setLatestGatewayAddress:;
- (void)setLatestWifiIfIndex:;
- (void)setMonitorStarted:;
- (void)removeObserver:;
- (id)init;
- (void)addObserver:;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)startMonitor;
+ (id)shareInstance;
@end
