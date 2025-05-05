@interface SAMICore_WebSocketConnectionEvent : NSObject
@property (nonatomic) q state;
@property (nonatomic) NSString url;
@property (nonatomic) NSString textMsg;
- (id)textMsg;
- (void)setTextMsg:;
- (id)url;
- (void)dealloc;
- (void)setState:;
- (void)setUrl:;
- (long long)state;
@end
