@interface FigCapturePowerMonitor : NSObject
@property (nonatomic) float maxTorchLevel;
- (id)init;
- (void)dealloc;
- (float)maxTorchLevel;
- (void)setPowerHandler:;
@end
