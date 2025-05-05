@interface IESLiveSaaSPuzzleSetup : IESLiveSaaSDefaultLaunchTask
- (void)excute;
- (void)setupMonitor;
+ (void)loadSwizzled;
+ (void)execute;
+ (void)setup;
@end
