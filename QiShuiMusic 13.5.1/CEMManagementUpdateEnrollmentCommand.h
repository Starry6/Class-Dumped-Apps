@interface CEMManagementUpdateEnrollmentCommand : CEMCommandBase
@property (nonatomic) NSData payloadProfile;
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
- (id)payloadProfile;
- (void)setPayloadProfile:;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)allowedPayloadKeys;
+ (id)buildWithIdentifier:withProfile:;
+ (id)buildRequiredOnlyWithIdentifier:withProfile:;
@end
