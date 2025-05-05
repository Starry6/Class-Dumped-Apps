@interface CEMNetworkContentCachingDeclaration_Ranges : CEMPayloadBase
@property (nonatomic) NSString payloadType;
@property (nonatomic) NSString payloadFirst;
@property (nonatomic) NSString payloadLast;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)payloadType;
- (void)setPayloadType:;
- (BOOL)loadPayload:error:;
- (id)serializePayloadWithAssetProviders:;
- (id)payloadFirst;
- (void)setPayloadFirst:;
- (id)payloadLast;
- (void)setPayloadLast:;
+ (id)allowedPayloadKeys;
+ (id)buildWithType:withFirst:withLast:;
+ (id)buildRequiredOnlyWithFirst:withLast:;
@end
