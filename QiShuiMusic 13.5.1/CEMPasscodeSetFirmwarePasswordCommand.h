@interface CEMPasscodeSetFirmwarePasswordCommand : CEMCommandBase
@property (nonatomic) NSString payloadCurrentPassword;
@property (nonatomic) NSString payloadNewPassword;
@property (nonatomic) NSNumber payloadAllowOroms;
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
- (id)payloadCurrentPassword;
- (void)setPayloadCurrentPassword:;
- (id)payloadNewPassword;
- (void)setPayloadNewPassword:;
- (id)payloadAllowOroms;
- (void)setPayloadAllowOroms:;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)allowedPayloadKeys;
+ (id)buildWithIdentifier:withCurrentPassword:withNewPassword:withAllowOroms:;
+ (id)buildRequiredOnlyWithIdentifier:withNewPassword:;
@end
