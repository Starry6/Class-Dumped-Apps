@interface CUDashboardClient : NSObject
@property (nonatomic) NSString server;
- (id)server;
- (void)setServer:;
- (void).cxx_destruct;
- (void)invalidate;
- (int)activate;
- (int)logJSON:;
- (int)logf:;
- (int)logv:args:;
- (int)_logCStr:length:;
@end
