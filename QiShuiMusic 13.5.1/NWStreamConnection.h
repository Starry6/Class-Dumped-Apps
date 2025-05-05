@interface NWStreamConnection : NWConnection
- (BOOL)readDataWithMinimumLength:maximumLength:completionHandler:;
- (BOOL)writeData:completionHandler:;
- (BOOL)writeCloseWithCompletionHandler:;
+ (id)connectionWithConnectedSocket:;
@end
