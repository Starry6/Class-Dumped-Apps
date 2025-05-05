@interface IESECPushManagerMonitor : NSObject
@property (nonatomic) double connectStartTime;
@property (nonatomic) double sendMessageStartTime;
- (double)connectStartTime;
- (void)pushManagerConnectionStateChanged:;
- (void)pushManagerFinishSendMessage:success:;
- (void)pushManagerStartConnection;
- (void)pushManagerStartSendMessage;
- (double)sendMessageStartTime;
- (void)setConnectStartTime:;
- (void)setSendMessageStartTime:;
@end
