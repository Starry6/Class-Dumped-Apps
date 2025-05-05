@interface AMapNewEnergyCustomCostMode : AMapSearchObject
@property (nonatomic) NSArray speeds;
@property (nonatomic) AMapNewEnergyCostCurve curve;
@property (nonatomic) AMapNewEnergyCostSlope slope;
@property (nonatomic) AMapNewEnergyCostTrans trans;
@property (nonatomic) double aux;
@property (nonatomic) double ferry;
@property (nonatomic) NSArray powertrainsLoss;
- (id)powertrainsLoss;
- (double)aux;
- (void)setAux:;
- (double)ferry;
- (void)setFerry:;
- (void)setPowertrainsLoss:;
- (void)setTrans:;
- (id)trans;
- (void)setCurve:;
- (id)init;
- (id)curve;
- (void)setSpeeds:;
- (void).cxx_destruct;
- (id)speeds;
- (id)slope;
- (void)setSlope:;
- (id)toJsonString;
@end
