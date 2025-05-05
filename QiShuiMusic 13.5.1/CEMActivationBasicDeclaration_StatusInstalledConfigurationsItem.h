@interface CEMActivationBasicDeclaration_StatusInstalledConfigurationsItem : CEMPayloadBase
@property (nonatomic) NSString statusIdentifier;
@property (nonatomic) NSString statusServerHash;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (BOOL)loadPayload:error:;
- (id)serializePayload;
- (id)statusIdentifier;
- (void)setStatusIdentifier:;
- (id)statusServerHash;
- (void)setStatusServerHash:;
+ (id)allowedStatusKeys;
+ (id)buildWithIdentifier:withServerHash:;
+ (id)buildRequiredOnlyWithIdentifier:withServerHash:;
@end
