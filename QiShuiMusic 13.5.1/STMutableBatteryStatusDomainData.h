@interface STMutableBatteryStatusDomainData : STBatteryStatusDomainData
@property (nonatomic) Q chargingState;
@property (nonatomic) Q percentCharge;
@property (nonatomic) BOOL batterySaverModeActive;
@property (nonatomic) NSString chargingDescription;
@property (nonatomic) Q chargingDescriptionType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setBatterySaverModeActive:;
- (void)setChargingState:;
- (void)setPercentCharge:;
- (BOOL)applyDiff:;
- (void)setChargingDescription:;
- (void)setChargingDescriptionType:;
- (id)copyWithZone:;
@end
