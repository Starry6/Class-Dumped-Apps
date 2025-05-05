@interface CEMNetworkUsageRulesDeclaration_ApplicationRulesItem : CEMPayloadBase
@property (nonatomic) NSArray payloadAppIdentifierMatches;
@property (nonatomic) NSNumber payloadAllowRoamingCellularData;
@property (nonatomic) NSNumber payloadAllowCellularData;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (BOOL)loadPayload:error:;
- (id)serializePayloadWithAssetProviders:;
- (id)payloadAppIdentifierMatches;
- (void)setPayloadAppIdentifierMatches:;
- (id)payloadAllowRoamingCellularData;
- (void)setPayloadAllowRoamingCellularData:;
- (id)payloadAllowCellularData;
- (void)setPayloadAllowCellularData:;
+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnly;
+ (id)buildWithAppIdentifierMatches:withAllowRoamingCellularData:withAllowCellularData:;
@end
