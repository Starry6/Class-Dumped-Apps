@interface VCWCMClient : NSObject
@property (nonatomic) NSObject<OS_xpc_object> connection;
@property (nonatomic) NSObject<OS_dispatch_queue> connectionQueue;
@property (nonatomic) <WCMClientDelegate> wcmClientDelegate;
- (id)init;
- (void)dealloc;
- (id)connectionQueue;
- (id)connection;
- (void)startWCMClient;
- (void)stopWCMClient;
- (id)wcmClientDelegate;
- (void)setWcmClientDelegate:;
@end
