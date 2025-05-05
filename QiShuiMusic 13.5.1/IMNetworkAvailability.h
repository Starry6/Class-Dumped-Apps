@interface IMNetworkAvailability : NSObject
@property (nonatomic) ^v context;
- (void)cancel;
- (void)dealloc;
- (id)context;
- (void)start;
- (void)_cancel;
- (void).cxx_destruct;
- (void)setContext:;
- (id)initWithFlags:options:timeout:wifiTimeout:completionBlock:;
- (id)initWithFlags:timeout:wifiTimeout:completionBlock:;
- (BOOL)_isNetworkAvailablibityCheckingDone:wantsWiFi:wantsCellular:cellular:hasCellularDataConnection:done:withinTimeWindow:;
- (void)_timerHit:;
- (void)_setTimer;
- (id)mobileNetworkManager;
@end
