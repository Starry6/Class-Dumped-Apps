@interface RTCReplyToken : NSObject
@property (nonatomic) RTCMessage reply;
@property (nonatomic) RTCLooper looper;
@property (nonatomic) BOOL replied;
- (id)initWithLooper:;
- (id)getRTCLooper;
- (BOOL)retrieveReply:;
- (id)reply;
- (void)setReply:;
- (void).cxx_destruct;
- (id)description;
- (long long)replyWithMessage:;
- (BOOL)replied;
- (void)setReplied:;
- (id)looper;
- (void)setLooper:;
@end
