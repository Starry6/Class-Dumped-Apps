@interface CEMPredicateAny : CEMPredicateBase
@property (nonatomic) NSArray payloadPredicates;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (BOOL)loadPayload:error:;
- (id)serializePayloadWithAssetProviders:;
- (id)payloadPredicates;
- (void)setPayloadPredicates:;
+ (id)buildWithPredicates:;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithPredicates:;
@end
