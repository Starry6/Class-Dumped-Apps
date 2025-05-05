@interface RTCMessage : NSObject
@property (nonatomic) <RTCMessageHandler> handler;
@property (nonatomic) RTCLooper looper;
@property (nonatomic) NSString what;
@property (nonatomic) NSMutableDictionary data;
- (id)initWithWhat:data:;
- (void)setTarget:looper:;
- (long long)postAndAwaitResponse:OrAwaitTimeoutMillis:;
- (BOOL)pickAwaitReply:;
- (long long)postReply:;
- (id)what;
- (void)setWhat:;
- (void)dealloc;
- (id)data;
- (void)setHandler:;
- (id)handler;
- (void)clear;
- (void).cxx_destruct;
- (long long)post:;
- (id)description;
- (void)setData:;
- (void)deliver;
- (id)looper;
- (void)setLooper:;
@end
