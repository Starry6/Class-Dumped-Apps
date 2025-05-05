@interface CEMActivationAdvancedDeclaration : CEMDeclarationBase
@property (nonatomic) NSArray payloadRequiredConfigurations;
@property (nonatomic) NSArray payloadStandardConfigurations;
@property (nonatomic) CEMAnyPayload payloadActivationPredicate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (BOOL)loadPayload:error:;
- (id)serializePayloadWithAssetProviders:;
- (id)payloadRequiredConfigurations;
- (void)setPayloadRequiredConfigurations:;
- (id)payloadStandardConfigurations;
- (void)setPayloadStandardConfigurations:;
- (id)payloadActivationPredicate;
- (void)setPayloadActivationPredicate:;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)allowedPayloadKeys;
+ (id)buildWithIdentifier:withRequiredConfigurations:withStandardConfigurations:withActivationPredicate:;
+ (id)buildRequiredOnlyWithIdentifier:withRequiredConfigurations:withStandardConfigurations:;
@end
