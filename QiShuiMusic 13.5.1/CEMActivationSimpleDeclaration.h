@interface CEMActivationSimpleDeclaration : CEMDeclarationBase
@property (nonatomic) NSArray payloadStandardConfigurations;
@property (nonatomic) CEMPredicateBase payloadPredicate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (BOOL)loadPayload:error:;
- (id)serializePayloadWithAssetProviders:;
- (id)payloadStandardConfigurations;
- (void)setPayloadStandardConfigurations:;
- (id)payloadPredicate;
- (void)setPayloadPredicate:;
+ (id)buildWithIdentifier:withStandardConfigurations:withPredicate:;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithIdentifier:withStandardConfigurations:;
@end
