@interface CEMEventSubscriptionDeclaration_Schedule : CEMPayloadBase
@property (nonatomic) NSString payloadFrequency;
@property (nonatomic) NSString payloadLocalTime;
@property (nonatomic) NSNumber payloadSpread;
@property (nonatomic) NSNumber payloadDay;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (BOOL)loadPayload:error:;
- (id)serializePayloadWithAssetProviders:;
- (id)payloadFrequency;
- (void)setPayloadFrequency:;
- (id)payloadLocalTime;
- (void)setPayloadLocalTime:;
- (id)payloadSpread;
- (void)setPayloadSpread:;
- (id)payloadDay;
- (void)setPayloadDay:;
+ (id)allowedPayloadKeys;
+ (id)buildWithFrequency:withLocalTime:withSpread:withDay:;
+ (id)buildRequiredOnlyWithFrequency:;
@end
