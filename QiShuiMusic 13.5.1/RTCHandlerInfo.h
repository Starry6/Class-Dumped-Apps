@interface RTCHandlerInfo : NSObject
@property (nonatomic) q handleId;
@property (nonatomic) <RTCMessageHandler> handler;
@property (nonatomic) RTCLooper looper;
- (id)initWithHandler:looper:;
- (id)getLooper;
- (long long)getHandleId;
- (void)setHandleId:looper:;
- (long long)handleId;
- (void)setHandleId:;
- (void)setHandler:;
- (id)handler;
- (void).cxx_destruct;
- (id)looper;
- (void)setLooper:;
@end
