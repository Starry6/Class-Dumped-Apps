@interface IAPClientPort : NSObject
@property (nonatomic) NSString uuid;
@property (nonatomic) NSObject<OS_dispatch_queue> sendDataHandlerQueue;
@property (nonatomic) @? sendDataHandler;
@property (nonatomic) NSObject<OS_dispatch_queue> clientPortEventQueue;
- (void)dealloc;
- (id)uuid;
- (void)setSendDataHandler:;
- (id)sendDataHandler;
- (id)initWithUUID:queue:sendHandler:;
- (id)sendDataHandlerQueue;
- (id)clientPortEventQueue;
@end
