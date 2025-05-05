@interface IESIMSendMessageLogger : NSObject
@property (nonatomic) NSMutableDictionary metricsDict;
@property (nonatomic) <IESIMWSConnectionManagerProtocol> wsConnectionManager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setMetricsDict:;
- (id)getMetricsModelOfMessage:;
- (id)metricsDict;
- (BOOL)p_checkMessageValid:;
- (void)recordFinishSendMessageWithResponse:;
- (void)recordStartSendMessage:inConversation:timestamp:;
- (void)setWsConnectionManager:;
- (void)updateMetricsModel:ofMessage:;
- (id)wsConnectionManager;
- (id)init;
- (void)clear;
- (void).cxx_destruct;
@end
