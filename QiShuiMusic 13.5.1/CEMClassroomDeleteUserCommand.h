@interface CEMClassroomDeleteUserCommand : CEMCommandBase
@property (nonatomic) NSString payloadUserName;
@property (nonatomic) NSNumber payloadForceDeletion;
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
- (id)payloadUserName;
- (void)setPayloadUserName:;
- (id)payloadForceDeletion;
- (void)setPayloadForceDeletion:;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)allowedPayloadKeys;
+ (id)buildWithIdentifier:withUserName:withForceDeletion:;
+ (id)buildRequiredOnlyWithIdentifier:withUserName:;
@end
