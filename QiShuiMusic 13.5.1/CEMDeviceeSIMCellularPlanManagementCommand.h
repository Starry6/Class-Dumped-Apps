@interface CEMDeviceeSIMCellularPlanManagementCommand : CEMCommandBase
@property (nonatomic) NSString payloadESIMServerURL;
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
- (id)payloadESIMServerURL;
- (void)setPayloadESIMServerURL:;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)allowedPayloadKeys;
+ (id)buildWithIdentifier:withESIMServerURL:;
+ (id)buildRequiredOnlyWithIdentifier:withESIMServerURL:;
@end
