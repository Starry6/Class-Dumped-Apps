@interface CEMNetworkVPNAppToAppLayerMappingDeclaration_AppLayerVPNMappingItem : CEMPayloadBase
@property (nonatomic) NSString payloadIdentifier;
@property (nonatomic) NSString payloadVPNUUID;
@property (nonatomic) NSString payloadDesignatedRequirement;
@property (nonatomic) NSString payloadSigningIdentifier;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)payloadIdentifier;
- (void)setPayloadIdentifier:;
- (BOOL)loadPayload:error:;
- (id)serializePayloadWithAssetProviders:;
- (id)payloadDesignatedRequirement;
- (void)setPayloadDesignatedRequirement:;
- (id)payloadSigningIdentifier;
- (void)setPayloadSigningIdentifier:;
- (id)payloadVPNUUID;
- (void)setPayloadVPNUUID:;
+ (id)allowedPayloadKeys;
+ (id)buildWithIdentifier:withVPNUUID:withDesignatedRequirement:withSigningIdentifier:;
+ (id)buildRequiredOnlyWithIdentifier:withVPNUUID:withDesignatedRequirement:withSigningIdentifier:;
@end
