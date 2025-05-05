@interface CEMAssetBaseDescriptor : CEMPayloadBase
@property (nonatomic) NSString payloadTitle;
@property (nonatomic) NSString payloadDescription;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)payloadDescription;
- (void)setPayloadDescription:;
- (BOOL)loadPayload:error:;
- (id)serializePayloadWithAssetProviders:;
- (id)payloadTitle;
- (void)setPayloadTitle:;
+ (id)allowedPayloadKeys;
+ (id)buildWithTitle:withDescription:;
+ (id)buildRequiredOnlyWithTitle:;
@end
