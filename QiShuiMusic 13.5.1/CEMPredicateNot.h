@interface CEMPredicateNot : CEMPredicateBase
@property (nonatomic) CEMPredicateBase payloadPredicate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (BOOL)loadPayload:error:;
- (id)serializePayloadWithAssetProviders:;
- (id)payloadPredicate;
- (void)setPayloadPredicate:;
+ (id)buildWithPredicate:;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithPredicate:;
@end
