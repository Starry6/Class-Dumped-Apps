@interface RTCEvent : NSObject
@property (nonatomic) NSDate whenMs;
@property (nonatomic) RTCMessage message;
- (id)whenMs;
- (void)setWhenMs:;
- (void)setMessage:;
- (id)message;
- (void).cxx_destruct;
@end
