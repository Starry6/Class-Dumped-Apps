@interface BSBasicServerClient : NSObject
@property (nonatomic) NSObject<OS_xpc_object> connection;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)sendMessage:;
- (void)suspend;
- (void)resume;
- (void)sendMessageWithPacker:;
- (id)connection;
- (void).cxx_destruct;
- (void)sendMessageWithPacker:replyHandler:onQueue:;
- (id)description;
- (id)initWithConnection:;
- (void)invalidate;
+ (id)wrapperWithConnection:;
@end
