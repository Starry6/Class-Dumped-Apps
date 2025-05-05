@interface WRMBasebandMetricsInterface : WRMClientInterface
- (void)registerClient:queue:;
- (id)init;
- (void)reConnect;
- (void)processWRMCellDataMetrics:;
- (void)processWRMNrPhyMetrics:;
- (void)unregisterClient;
- (void)getCellularDataMetrics:;
- (void)handleNotification::;
- (void)getQSHMetrics:;
- (void)processWRMWiFiBWEstMetrics:;
- (void)getNRPhyMetrics:;
- (void).cxx_destruct;
- (void)getWiFiBWEstimationMetrics:;
@end
