@interface OS_xpc_remote_connection : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> internal_queue;
@property (nonatomic) NSObject<OS_dispatch_queue> target_queue;
@property (nonatomic) @? event_handler;
@property (nonatomic) NSInteger state;
@property (nonatomic) NSInteger type;
@property (nonatomic) BOOL send_in_progress;
@property (nonatomic) OS_xpc_remote_listener listener;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setEvent_handler:;
- (void)dealloc;
- (void)setState:;
- (void)setSend_in_progress:;
- (id)event_handler;
- (void)setType:;
- (BOOL)send_in_progress;
- (void)setInternal_queue:;
- (id)listener;
- (id)target_queue;
- (int)type;
- (int)state;
- (void).cxx_destruct;
- (void)setTarget_queue:;
- (void)setListener:;
- (id)internal_queue;
@end
