@interface CEMDeviceLockCommand : CEMCommandBase
@property (nonatomic) NSString payloadMessage;
@property (nonatomic) NSString payloadPhoneNumber;
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
- (id)payloadMessage;
- (void)setPayloadMessage:;
- (id)payloadPhoneNumber;
- (void)setPayloadPhoneNumber:;
+ (id)buildRequiredOnlyWithIdentifier:;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)allowedPayloadKeys;
+ (id)buildWithIdentifier:withMessage:withPhoneNumber:;
@end
