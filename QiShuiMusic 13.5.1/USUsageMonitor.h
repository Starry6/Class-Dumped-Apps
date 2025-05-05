@interface USUsageMonitor : NSObject
@property (nonatomic) NSXPCConnection xpcConnection;
- (id)init;
- (void)dealloc;
- (id)xpcConnection;
- (void).cxx_destruct;
- (void)startMonitoringBudgets:darwinNotificationName:notificationTimes:completionHandler:;
- (void)startMonitoringBudgets:darwinNotificationName:notificationTimes:clientIdentifier:completionHandler:;
- (BOOL)startMonitoringBudgets:darwinNotificationName:notificationTimes:error:;
- (void)stopMonitoringBudgets:completionHandler:;
- (void)stopMonitoringBudgets:clientIdentifier:completionHandler:;
- (void)stopMonitoringAllBudgetsWithCompletionHandler:;
- (void)checkStatusOfBudgets:completionHandler:;
- (void)checkStatusOfBudgets:clientIdentifier:completionHandler:;
- (id)checkStatusOfBudgets:error:;
- (void)checkStatusOfAllBudgetsWithCompletionHandler:;
- (void)checkStatusOfBudgets:clientIdentifiers:completionHandler:;
- (id)checkStatusOfBudgets:clientIdentifiers:error:;
@end
