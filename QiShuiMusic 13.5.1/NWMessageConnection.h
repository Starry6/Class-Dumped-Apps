@interface NWMessageConnection : NWConnection
- (void)readMessageWithCompletionHandler:;
- (void)writeMessage:completionHandler:;
@end
