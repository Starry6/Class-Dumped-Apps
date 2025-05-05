@interface BMReadMessageEvent : BMEventBase
@property (nonatomic) NSString idsHandle;
@property (nonatomic) I dataVersion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithProtoData:;
- (id)proto;
- (id)encodeAsProto;
- (unsigned int)dataVersion;
- (id)initWithProto:;
- (void).cxx_destruct;
- (id)serialize;
- (BOOL)isEqual:;
- (id)initWithIDSHandle:;
- (id)idsHandle;
- (void)setIdsHandle:;
+ (id)eventWithData:dataVersion:;
@end
