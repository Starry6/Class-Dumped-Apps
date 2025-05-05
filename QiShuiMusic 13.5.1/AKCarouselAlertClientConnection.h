@interface AKCarouselAlertClientConnection : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> internalQueue;
@property (nonatomic) NSXPCConnection xpcConnection;
- (id)init;
- (void)dealloc;
- (void)setInternalQueue:;
- (void)setXpcConnection:;
- (id)xpcConnection;
- (id)connection;
- (void).cxx_destruct;
- (void)unsafe_invalidate;
- (id)internalQueue;
- (void)presentAlertWithDictionary:completion:;
- (void)dismissAlert:;
+ (id)sharedConnection;
@end
