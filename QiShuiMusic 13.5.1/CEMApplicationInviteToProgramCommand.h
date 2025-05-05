@interface CEMApplicationInviteToProgramCommand : CEMCommandBase
@property (nonatomic) NSString payloadProgramID;
@property (nonatomic) NSString payloadInvitationURL;
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
- (id)payloadProgramID;
- (void)setPayloadProgramID:;
- (id)payloadInvitationURL;
- (void)setPayloadInvitationURL:;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)allowedPayloadKeys;
+ (id)buildWithIdentifier:withProgramID:withInvitationURL:;
+ (id)buildRequiredOnlyWithIdentifier:withProgramID:withInvitationURL:;
@end
