@interface CEMSystemEnergySaverDeclaration_EnergySaverSchedule : CEMPayloadBase
@property (nonatomic) CEMSystemEnergySaverDeclaration_RepeatingPowerItem payloadRepeatingPowerOn;
@property (nonatomic) CEMSystemEnergySaverDeclaration_RepeatingPowerItem payloadRepeatingPowerOff;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (BOOL)loadPayload:error:;
- (id)serializePayloadWithAssetProviders:;
- (id)payloadRepeatingPowerOn;
- (void)setPayloadRepeatingPowerOn:;
- (id)payloadRepeatingPowerOff;
- (void)setPayloadRepeatingPowerOff:;
+ (id)allowedPayloadKeys;
+ (id)buildRequiredOnly;
+ (id)buildWithRepeatingPowerOn:withRepeatingPowerOff:;
@end
