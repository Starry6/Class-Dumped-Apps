@interface AMapNewEnergyCostCurve : AMapSearchObject
@property (nonatomic) double access;
@property (nonatomic) double decess;
- (double)decess;
- (void)setDecess:;
- (double)access;
- (void)setAccess:;
+ (id)newEnergyCostCurveWithAccess:decess:;
@end
