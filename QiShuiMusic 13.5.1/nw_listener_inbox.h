@interface nw_listener_inbox : NSObject
@property (nonatomic) NSObject<OS_nw_endpoint> local_endpoint;
@property (nonatomic) NSObject<OS_nw_interface> interface;
@property (nonatomic) BOOL multicast;
- (id)interface;
- (BOOL)cancel;
- (void)setMulticast:;
- (id)start;
- (BOOL)suspend;
- (BOOL)isSuspended;
- (BOOL)resume;
- (void).cxx_destruct;
- (id)initWithDelegate:;
- (BOOL)multicast;
- (id)local_endpoint;
@end
