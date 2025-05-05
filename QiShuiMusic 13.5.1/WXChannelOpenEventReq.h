@interface WXChannelOpenEventReq : BaseReq
@property (nonatomic) NSString userName;
@property (nonatomic) NSString eventId;
@property (nonatomic) NSString extInfo;
- (id)extInfo;
- (void)setExtInfo:;
- (id)userName;
- (void)setUserName:;
- (void).cxx_destruct;
- (id)eventId;
- (void)setEventId:;
+ (id)object;
@end
