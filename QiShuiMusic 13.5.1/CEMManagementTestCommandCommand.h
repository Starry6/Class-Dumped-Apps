@interface CEMManagementTestCommandCommand : CEMCommandBase
@property (nonatomic) NSString payloadEcho;
@property (nonatomic) NSString payloadReturnStatus;
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
- (id)payloadEcho;
- (void)setPayloadEcho:;
- (id)payloadReturnStatus;
- (void)setPayloadReturnStatus:;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)allowedPayloadKeys;
+ (id)buildWithIdentifier:withEcho:withReturnStatus:;
+ (id)buildRequiredOnlyWithIdentifier:withEcho:;
@end
