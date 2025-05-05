@interface PIAWorkerMessagePort : NSObject
@property (nonatomic) PIASTLQueue bridgeMessageList;
@property (nonatomic) PIAWorker worker;
- (id)initWithWorker:;
- (id)bridgeMessageList;
- (id)getWorkerBridgeMessage;
- (void)onMessage:;
- (void)onReceivedMessage:;
- (void)setBridgeMessageList:;
- (void)terminateWorkerWithResult:;
- (void).cxx_destruct;
- (id)worker;
- (void)setWorker:;
- (void)postMessage:;
@end
