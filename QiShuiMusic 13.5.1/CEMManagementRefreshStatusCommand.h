@interface CEMManagementRefreshStatusCommand : CEMCommandBase
@property (nonatomic) NSArray payloadIdentifiers;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)payloadIdentifiers;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (void)setPayloadIdentifiers:;
- (BOOL)mustBeSupervised;
- (BOOL)loadPayload:error:;
- (id)serializePayloadWithAssetProviders:;
- (int)executionLevel;
+ (id)buildRequiredOnlyWithIdentifier:;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)allowedPayloadKeys;
+ (id)buildWithIdentifier:withIdentifiers:;
@end
