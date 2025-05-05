@interface TUUserNotificationProviderXPCClient : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) NSXPCConnection xpcConnection;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (id)synchronousServerWithErrorHandler:;
- (void)setXpcConnection:;
- (id)xpcConnection;
- (id)serverWithErrorHandler:;
- (void).cxx_destruct;
- (id)queue;
- (id)momentCapturedForStreamToken:requesterID:reply:;
+ (void)setSynchronousServer:;
+ (void)setAsynchronousServer:;
+ (id)userNotificationProviderServerXPCInterface;
+ (id)asynchronousServer;
+ (id)synchronousServer;
@end
