@interface NWDatagramConnection : NWConnection
- (BOOL)readDatagramsWithMinimumCount:maximumCount:completionHandler:;
- (BOOL)writeDatagrams:completionHandler:;
+ (id)connectionWithConnectedSocket:;
@end
