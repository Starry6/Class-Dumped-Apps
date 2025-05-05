@interface DMCProtocolWellKnownResponse_WellKnownResponseServer : DMCModelPayloadBase
@property (nonatomic) NSString responseVersion;
@property (nonatomic) NSString responseBaseURL;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (BOOL)loadFromDictionary:serializationType:error:;
- (id)serializeWithType:;
- (id)responseVersion;
- (void)setResponseVersion:;
- (id)responseBaseURL;
- (void)setResponseBaseURL:;
+ (id)allowedResponseKeys;
+ (id)buildWithVersion:baseURL:;
+ (id)buildRequiredOnlyWithVersion:baseURL:;
@end
