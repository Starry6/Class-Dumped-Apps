@interface AMapNewEnergyCostPowertrainLoss : AMapSearchObject
@property (nonatomic) double powerdemand;
@property (nonatomic) double value;
- (void)setPowerdemand:;
- (double)powerdemand;
- (void)setValue:;
- (double)value;
+ (id)newEnergyCostPowertrainLossWithPowerdemand:value:;
@end
