@interface CEMDeviceEraseCommand : CEMCommandBase
@property (nonatomic) NSNumber payloadPreserveDataPlan;
@property (nonatomic) NSNumber payloadDisallowProximitySetup;
@property (nonatomic) NSString payloadPIN;
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
- (id)payloadPreserveDataPlan;
- (void)setPayloadPreserveDataPlan:;
- (id)payloadDisallowProximitySetup;
- (void)setPayloadDisallowProximitySetup:;
- (id)payloadPIN;
- (void)setPayloadPIN:;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)allowedPayloadKeys;
+ (id)buildWithIdentifier:withPreserveDataPlan:withDisallowProximitySetup:withPIN:;
+ (id)buildRequiredOnlyWithIdentifier:withPIN:;
@end
