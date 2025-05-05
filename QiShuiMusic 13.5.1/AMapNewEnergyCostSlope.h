@interface AMapNewEnergyCostSlope : AMapSearchObject
@property (nonatomic) double up;
@property (nonatomic) double down;
- (double)up;
- (void)setUp:;
- (double)down;
- (void)setDown:;
+ (id)newEnergyCostSlopeWithUp:down:;
@end
