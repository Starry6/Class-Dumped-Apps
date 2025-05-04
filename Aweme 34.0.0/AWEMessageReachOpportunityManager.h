@interface AWEMessageReachOpportunityManager : NSObject
@property (nonatomic) <AWEMessageReachInternalAbilityProtocol> config;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <IESLCMessageHandlerProtocol> messageHandler;
- (void)didFinishLogin;
- (void)didFinishLogoutWithUid:;
- (void)ieslc_messageHandler:didReceiveMsg:;
- (void)handlePitayaMessage:;
- (void)appDidFinishColdLaunch;
- (BOOL)handleCachePitayaMessage:;
- (void)p_handleLongConnectMessage:triggerEvent:;
- (id)collectBussinessParamsWithTriggerEvent:source:scenes:;
- (id)collectAllBizParamsWithTriggerEvent:source:;
- (void)requestFromSideBarWithExtraReqPramas:triggerCompletion:updateTask:;
- (void)setConfig:;
- (void)handleMessage:;
- (id)initWithConfig:;
- (id)config;
- (void)applicationWillEnterForeground:;
- (void).cxx_destruct;
- (void)startMonitor;
@end
