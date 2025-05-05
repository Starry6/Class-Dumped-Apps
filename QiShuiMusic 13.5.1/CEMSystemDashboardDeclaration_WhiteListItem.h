@interface CEMSystemDashboardDeclaration_WhiteListItem : CEMPayloadBase
@property (nonatomic) NSString payloadType;
@property (nonatomic) NSString payloadID;
- (id)payloadID;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)payloadType;
- (void)setPayloadType:;
- (void)setPayloadID:;
- (BOOL)loadPayload:error:;
- (id)serializePayloadWithAssetProviders:;
+ (id)allowedPayloadKeys;
+ (id)buildWithType:withID:;
+ (id)buildRequiredOnlyWithType:withID:;
@end
