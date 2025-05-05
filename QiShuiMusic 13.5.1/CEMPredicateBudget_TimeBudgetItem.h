@interface CEMPredicateBudget_TimeBudgetItem : CEMPayloadBase
@property (nonatomic) NSNumber payloadSeconds;
@property (nonatomic) NSArray payloadDays;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (BOOL)loadPayload:error:;
- (id)serializePayloadWithAssetProviders:;
- (id)payloadSeconds;
- (void)setPayloadSeconds:;
- (id)payloadDays;
- (void)setPayloadDays:;
+ (id)buildWithSeconds:withDays:;
+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnlyWithSeconds:;
@end
