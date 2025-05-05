@interface CEMStringDeclaration : CEMAssetBase
@property (nonatomic) CEMAssetBaseDescriptor payloadDescriptor;
@property (nonatomic) NSString payloadData;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setPayloadData:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)payloadData;
- (BOOL)loadPayload:error:;
- (id)serializePayloadWithAssetProviders:;
- (id)payloadDescriptor;
- (void)setPayloadDescriptor:;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)allowedPayloadKeys;
+ (id)buildWithIdentifier:withDescriptor:withData:;
+ (id)buildRequiredOnlyWithIdentifier:withDescriptor:withData:;
@end
