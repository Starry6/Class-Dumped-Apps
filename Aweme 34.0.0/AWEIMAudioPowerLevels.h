@interface AWEIMAudioPowerLevels : NSObject
@property (nonatomic) float average;
@property (nonatomic) float peak;
- (float)average;
- (void)setAverage:;
- (float)peak;
- (void)setPeak:;
+ (id)levelsWithAverage:peak:;
@end
