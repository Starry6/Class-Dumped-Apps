@interface BMUserFocusActivityEvent : BMEventBase
@property (nonatomic) NSString clientID;
@property (nonatomic) NSString mode;
@property (nonatomic) BOOL isStart;
@property (nonatomic) I dataVersion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithProtoData:;
- (id)proto;
- (id)json;
- (id)encodeAsProto;
- (void)setClientID:;
- (unsigned int)dataVersion;
- (unsigned long long)hash;
- (id)initWithProto:;
- (BOOL)isStart;
- (void).cxx_destruct;
- (id)description;
- (id)serialize;
- (id)mode;
- (id)jsonDict;
- (id)clientID;
- (BOOL)isEqual:;
- (void)setMode:;
- (id)initWithMode:clientID:isStart:;
+ (id)eventWithData:dataVersion:;
@end
