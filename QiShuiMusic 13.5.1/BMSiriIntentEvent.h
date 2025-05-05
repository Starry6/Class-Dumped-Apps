@interface BMSiriIntentEvent : BMEventBase
@property (nonatomic) NSString intentId;
@property (nonatomic) NSString eventType;
@property (nonatomic) NSData eventData;
@property (nonatomic) I dataVersion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithProtoData:;
- (id)proto;
- (id)encodeAsProto;
- (id)eventType;
- (unsigned int)dataVersion;
- (unsigned long long)hash;
- (id)intentId;
- (id)initWithProto:;
- (void).cxx_destruct;
- (id)description;
- (id)serialize;
- (id)eventData;
- (BOOL)isEqual:;
- (id)initWithIntentId:eventType:eventData:;
+ (id)eventWithData:dataVersion:;
@end
