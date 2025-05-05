@interface CEMManagementRetryActivatedConfigurationCommand : CEMCommandBase
@property (nonatomic) NSString payloadActivationIdentifier;
@property (nonatomic) NSString payloadConfigurationIdentifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (BOOL)mustBeSupervised;
- (BOOL)loadPayload:error:;
- (id)serializePayloadWithAssetProviders:;
- (int)executionLevel;
- (id)payloadActivationIdentifier;
- (void)setPayloadActivationIdentifier:;
- (id)payloadConfigurationIdentifier;
- (void)setPayloadConfigurationIdentifier:;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)allowedPayloadKeys;
+ (id)buildWithIdentifier:withActivationIdentifier:withConfigurationIdentifier:;
+ (id)buildRequiredOnlyWithIdentifier:withActivationIdentifier:withConfigurationIdentifier:;
@end
