@interface OS_remote_device_browser : NSObject
@property (nonatomic) I device_type;
@property (nonatomic) NSObject<OS_xpc_object> connection;
@property (nonatomic) NSObject<OS_dispatch_queue> cbq;
@property (nonatomic) BOOL canceled;
@property (nonatomic) BOOL canceling;
@property (nonatomic) @? callback;
- (id)callback;
- (void)setCallback:;
- (void)dealloc;
- (id)cbq;
- (BOOL)canceling;
- (unsigned int)device_type;
- (void)setCbq:;
- (id)connection;
- (void).cxx_destruct;
- (void)setConnection:;
- (void)setCanceling:;
- (void)setCanceled:;
- (void)setDevice_type:;
- (BOOL)canceled;
@end
