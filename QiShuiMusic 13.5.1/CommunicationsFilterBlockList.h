@interface CommunicationsFilterBlockList : NSObject
- (BOOL)_connect;
- (id)init;
- (void)dealloc;
- (id)_sendSynchronousXPCRequest:;
- (void)_disconnected;
- (BOOL)_disconnect;
- (BOOL)isItemInList:;
- (void)removeItemForAllServices:;
- (id)copyAllItems;
- (void)addItemForAllServices:;
- (void)_sendXPCRequest:completionBlock:;
+ (id)sharedInstance;
@end
