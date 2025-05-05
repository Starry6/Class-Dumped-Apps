@interface DMCModelAnyPayload : DMCModelPayloadBase
@property (nonatomic) NSDictionary dictKeys;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (BOOL)loadFromDictionary:serializationType:error:;
- (id)serializeWithType:;
- (id)dictKeys;
- (void)setDictKeys:;
+ (id)buildFromDictionary:;
@end
