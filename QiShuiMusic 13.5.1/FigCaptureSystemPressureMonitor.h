@interface FigCaptureSystemPressureMonitor : NSObject
@property (nonatomic) @? systemPressureLevelChangedHandler;
@property (nonatomic) NSInteger systemPressureLevelFromPearlProjector;
- (void)dealloc;
- (void)setSystemPressureLevelChangedHandler:;
- (void)updateWithPearlProjectorTemperature:;
- (int)systemPressureLevelFromPearlProjector;
- (id)systemPressureLevelChangedHandler;
- (id)initWithPearlModuleType:;
- (void)callSystemPressureLevelChangedHandler;
- (void)startMonitoringPearlProjectorTemperatureUntilNominal;
@end
