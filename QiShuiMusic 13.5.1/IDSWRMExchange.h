@interface IDSWRMExchange : NSObject
- (id)init;
- (void)dealloc;
- (void)submitMetric:;
- (void)_notifyDelegate;
- (void).cxx_destruct;
- (void)_dispatchAfter:block:;
- (unsigned long long)recommendedLinkType;
- (void)_submitBlockAsync:;
- (void)_startXPCConnection;
- (void)_stopXPCConnection;
- (void)_restartClient;
- (void)_processXPCEvent:;
- (void)_reconnectUntilTimeout;
- (void)_sendXPCMessage:;
- (BOOL)_isXPCDictionary:;
- (id)_newRegisterMessage;
- (id)_newSubscribeMessage;
- (id)_newSubscribeStatusUpdateMessage;
- (id)_newSubscribeStatusUpdateMessage:nearby:;
- (id)_newPrefSubscribeMessage:;
- (id)_newUnsubscribeMessage;
- (void)_registerWithWRM;
- (void)subscribeForRecommendation:recommendationType:block:;
- (void)_restartSubscriptionIfNeeded;
- (void)unsubscribeForRecommendation;
- (BOOL)_processXPCMessage:;
- (BOOL)_processLinkPreferenceNotificationEvent:;
- (BOOL)isWiFiRecommended;
- (BOOL)isBTRecommended;
- (BOOL)_setRecommendedLinkType:;
- (void)_setReportInterval:;
- (BOOL)_processMetricsConfigEvent:;
- (id)_newMetricReportMessage;
- (void)_sendMetricReport;
- (void)_sendMetricReportPeriodically;
- (void)_updateLocalMetric:;
- (void)_resetLocalMetric;
- (void)handleActiveLinkChange:;
- (void)handleNetworkStateChangeUpdate:nearby:;
+ (id)sharedInstance;
@end
