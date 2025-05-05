@interface TUCallHistoryManagerXPCClient : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) NSXPCConnection xpcConnection;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)handleServerDisconnect;
- (id)init;
- (void)dealloc;
- (id)synchronousServerWithErrorHandler:;
- (void)setXpcConnection:;
- (id)xpcConnection;
- (id)serverWithErrorHandler:;
- (void).cxx_destruct;
- (void)setQueue:;
- (id)queue;
- (void)invalidate;
- (void)updateOutgoingLocalParticipantUUID:forCallsWithOutgoingLocalParticipantUUID:;
+ (id)callHistoryManagerClientXPCInterface;
+ (void)setSynchronousServer:;
+ (id)callHistoryManagerAllowedClasses;
+ (void)setAsynchronousServer:;
+ (id)callHistoryManagerServerXPCInterface;
+ (id)asynchronousServer;
+ (id)synchronousServer;
@end
