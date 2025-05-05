@interface CEMAnyPayload : CEMPayloadBase
@property (nonatomic) NSDictionary payloadKeys;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (BOOL)loadPayload:error:;
- (id)serializePayloadWithAssetProviders:;
- (id)serializePayload;
- (id)payloadKeys;
- (void)setPayloadKeys:;
+ (id)buildFromDictionary:;
@end
