@interface CEMPredicateOneTime : CEMPredicateBase
@property (nonatomic) NSString payloadDateTime;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (BOOL)loadPayload:error:;
- (id)serializePayloadWithAssetProviders:;
- (id)payloadDateTime;
- (void)setPayloadDateTime:;
+ (id)buildRequiredOnlyWithDateTime:;
+ (id)buildWithDateTime:;
+ (id)registeredClassName;
+ (id)registeredIdentifier;
+ (id)allowedPayloadKeys;
@end
