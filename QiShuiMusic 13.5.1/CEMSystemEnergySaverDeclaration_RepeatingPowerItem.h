@interface CEMSystemEnergySaverDeclaration_RepeatingPowerItem : CEMPayloadBase
@property (nonatomic) NSString payloadEventtype;
@property (nonatomic) NSNumber payloadWeekdays;
@property (nonatomic) NSNumber payloadTime;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (BOOL)loadPayload:error:;
- (id)serializePayloadWithAssetProviders:;
- (id)payloadEventtype;
- (void)setPayloadEventtype:;
- (id)payloadWeekdays;
- (void)setPayloadWeekdays:;
- (id)payloadTime;
- (void)setPayloadTime:;
+ (id)allowedPayloadKeys;
+ (id)buildWithEventtype:withWeekdays:withTime:;
+ (id)buildRequiredOnlyWithEventtype:;
@end
