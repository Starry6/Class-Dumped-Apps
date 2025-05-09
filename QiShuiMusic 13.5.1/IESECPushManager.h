@interface IESECPushManager : NSObject
@property (nonatomic) Q currentState;
@property (nonatomic) TTPushManager pushManager;
@property (nonatomic) TTPushConfig pushConfig;
@property (nonatomic) IESECPushManagerMonitor monitor;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <IESECPushManagerDelegate> delegate;
- (BOOL)asyncSendPushMessage:;
- (void)asyncStartConnection;
- (void)asyncStopConnection;
- (void)configConnection:;
- (void)onAppDidBecomeActive:;
- (void)onConnectionErrorWithState:connectionState:url:error:;
- (void)onConnectionStateChanged:connectionState:url:;
- (void)onFeedbackLog:feedbacklog:;
- (void)onFrontierMessageReceived:message:;
- (void)onReachabilityChanged:;
- (BOOL)p_asyncAckWithMessage:;
- (int)p_clientVersionNumber;
- (id)p_convertJsonDataToPayload:;
- (id)p_convertPayloadToJsonData:;
- (int)p_currentNetworkStatus;
- (int)p_currentPlatform;
- (id)p_customParamsWithConfig:;
- (void)p_handleNetworkChange:;
- (BOOL)p_isEcomChannel:;
- (BOOL)p_isEcomWsURL:;
- (id)pushConfig;
- (void)setPushConfig:;
- (void)setCurrentState:;
- (id)init;
- (void)dealloc;
- (unsigned long long)currentState;
- (void)setDelegate:;
- (void)setPushManager:;
- (id)pushManager;
- (void)setMonitor:;
- (id)delegate;
- (void).cxx_destruct;
- (BOOL)isConnected;
- (id)monitor;
- (void)p_removeObservers;
- (void)p_addObservers;
@end
