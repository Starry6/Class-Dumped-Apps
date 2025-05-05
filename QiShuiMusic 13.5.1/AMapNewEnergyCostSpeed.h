@interface AMapNewEnergyCostSpeed : AMapSearchObject
@property (nonatomic) double speed;
@property (nonatomic) double value;
- (void)setSpeed:;
- (double)speed;
- (void)setValue:;
- (double)value;
+ (id)newEnergyCostSpeedWithSpeed:value:;
@end
