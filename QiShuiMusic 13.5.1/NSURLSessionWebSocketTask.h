@interface NSURLSessionWebSocketTask : NSURLSessionTask
@property (nonatomic) q maximumMessageSize;
@property (nonatomic) q closeCode;
@property (nonatomic) NSData closeReason;
- (void)sendMessage:completionHandler:;
- (void)receiveMessageWithCompletionHandler:;
- (id)closeReason;
- (long long)maximumMessageSize;
- (void)setMaximumMessageSize:;
- (void)cancelWithCloseCode:reason:;
- (void).cxx_destruct;
- (void)sendPingWithPongReceiveHandler:;
- (long long)closeCode;
@end
