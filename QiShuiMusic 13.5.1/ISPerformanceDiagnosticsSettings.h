@interface ISPerformanceDiagnosticsSettings : ISSettings
@property (nonatomic) BOOL shouldTracePerformance;
- (void)setDefaultValues;
- (BOOL)shouldTracePerformance;
- (void)setShouldTracePerformance:;
+ (id)sharedInstance;
+ (id)settingsControllerModule;
@end
