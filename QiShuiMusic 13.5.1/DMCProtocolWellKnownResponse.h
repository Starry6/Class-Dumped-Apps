@interface DMCProtocolWellKnownResponse : DMCModelPayloadBase
@property (nonatomic) NSArray responseServers;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (BOOL)loadFromDictionary:serializationType:error:;
- (id)serializeWithType:;
- (id)responseServers;
- (void)setResponseServers:;
+ (id)requestWithServers:;
@end
