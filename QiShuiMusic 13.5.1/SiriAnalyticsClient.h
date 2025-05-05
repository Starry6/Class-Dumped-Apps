@interface SiriAnalyticsClient : NSObject
@property (nonatomic) SiriAnalyticsClientMessageStream defaultMessageStream;
- (BOOL)clientMessageStream:shouldEmitMessage:timestamp:isolatedStreamUUID:;
- (void)setDefaultMessageStream:;
- (id)defaultMessageStream;
- (void).cxx_destruct;
@end
