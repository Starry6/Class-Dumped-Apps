@interface FigCaptureThermalMonitor : NSObject
@property (nonatomic) float maxTorchLevel;
@property (nonatomic) NSInteger thermalLevel;
- (id)init;
- (void)dealloc;
- (float)maxTorchLevel;
- (int)thermalLevel;
- (void)setThermalHandler:;
@end
