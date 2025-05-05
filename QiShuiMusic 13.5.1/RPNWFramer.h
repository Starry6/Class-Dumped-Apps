@interface RPNWFramer : NSObject
+ (void)startConnection:;
+ (id)controlCodeToString:;
+ (BOOL)writeControlOnFramer:type:error:;
+ (BOOL)writeDataOnFramer:data:;
+ (void)writeErrorOnFramer:error:;
+ (void)setupDaemonFramer:receiveHandler:closeHandler:;
@end
