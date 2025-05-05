@interface VCXPCConnection : NSObject
@property (nonatomic) NSObject<OS_xpc_object> connection;
@property (nonatomic) NSInteger pid;
@property (nonatomic) @ context;
@property (nonatomic) NSData tokenData;
@property (nonatomic) NSString lastCalledApiName;
@property (nonatomic) BOOL persistent;
- (id)init;
- (BOOL)isPersistent;
- (void)dealloc;
- (id)context;
- (void)setTokenData:;
- (int)pid;
- (id)connection;
- (void)setConnection:;
- (id)description;
- (void)setPersistent:;
- (void)setContext:;
- (id)tokenData;
- (void)setPid:;
- (void)startTimeoutTimer;
- (void)stopTimeoutTimer;
- (void)createTimeoutTimer;
- (void)destroyTimeoutTimer;
- (id)lastCalledApiName;
- (void)setLastCalledApiName:;
+ (void)selfTerminateDueToTimeout:;
@end
