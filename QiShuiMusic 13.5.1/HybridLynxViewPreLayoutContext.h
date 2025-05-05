@interface HybridLynxViewPreLayoutContext : NSObject
@property (nonatomic) HybridLynxView lynxView;
@property (nonatomic) float rootHeight;
- (id)lynxView;
- (float)rootHeight;
- (void)setLynxView:;
- (void)setRootHeight:;
- (void).cxx_destruct;
+ (void)preLayoutWithConfig:completion:;
+ (id)createContextWithConfig:;
+ (id)globalPropsWithConfig:;
+ (id)lifeCycleTrackerWithPrelayoutConfig:;
+ (id)preLayoutWithConfig:;
+ (void)reportMonitorWithConfig:duration:status:;
@end
