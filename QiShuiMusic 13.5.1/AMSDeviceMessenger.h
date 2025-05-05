@interface AMSDeviceMessenger : NSObject
@property (nonatomic) AMSDaemonConnection connection;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) NSMutableArray updateHandlers;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)updateHandlers;
- (id)connection;
- (void).cxx_destruct;
- (void)setConnection:;
- (void)setQueue:;
- (id)queue;
- (void)setUpdateHandlers:;
- (void)deviceMessengerDidReceiveMessage:;
- (void)deviceMessengerDidReceiveReply:;
- (void)deviceMessengerDidClearMessage:;
- (void)deviceMessengerDidUpdateDevices;
- (void)addUpdateHandlerForType:filter:handler:;
- (id)dialogsWithFilter:;
- (id)clearDialog:;
- (id)sendDialog:account:;
- (id)_getProxyObject;
- (id)_identifierFromDialogRequest:;
- (void)_sendDelegateUpdateForMessage:;
@end
