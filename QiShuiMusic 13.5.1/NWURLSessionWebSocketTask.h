@interface NWURLSessionWebSocketTask : NWURLSessionTask
@property (nonatomic) q maximumMessageSize;
@property (nonatomic) q closeCode;
@property (nonatomic) NSData closeReason;
- (void)sendMessage:completionHandler:;
- (void)receiveMessageWithCompletionHandler:;
- (id)closeReason;
- (long long)maximumMessageSize;
- (void)setMaximumMessageSize:;
- (id)response;
- (void)cancelWithCloseCode:reason:;
- (void).cxx_destruct;
- (BOOL)isKindOfClass:;
- (void)sendPingWithPongReceiveHandler:;
- (void)_sendCloseCode:reason:;
- (long long)closeCode;
- (void)startNextLoad;
- (void)completeTaskWithError:;
@end
