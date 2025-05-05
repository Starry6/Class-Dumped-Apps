@interface IESLiveIMMessagePacket : NSObject
@property (nonatomic) NSArray messages;
@property (nonatomic) q receiveCount;
@property (nonatomic) q parseCount;
@property (nonatomic) @ object;
@property (nonatomic) NSDictionary extra;
@property (nonatomic) q pid;
@property (nonatomic) double timeout;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)parseCount;
- (long long)receiveCount;
- (void)setExtra:;
- (void)setParseCount:;
- (void)setReceiveCount:;
- (void)updateExtraWithKey:value:;
- (void)setObject:;
- (id)extra;
- (id)messages;
- (void).cxx_destruct;
- (id)object;
- (void)setMessages:;
@end
