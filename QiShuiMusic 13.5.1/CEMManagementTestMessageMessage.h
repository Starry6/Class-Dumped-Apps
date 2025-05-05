@interface CEMManagementTestMessageMessage : CEMMessageBase
@property (nonatomic) NSString payloadEcho;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (BOOL)loadPayload:error:;
- (id)serializePayloadWithAssetProviders:;
- (id)payloadEcho;
- (void)setPayloadEcho:;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)allowedPayloadKeys;
+ (id)buildWithEcho:;
+ (id)buildRequiredOnlyWithEcho:;
@end
