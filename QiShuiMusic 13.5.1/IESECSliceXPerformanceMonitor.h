@interface IESECSliceXPerformanceMonitor : NSObject
- (void)debug_interface_point:containerView:performanceParams:;
- (id)getEventName:;
- (void)markPhasedPointEnd:containerView:phaseName:extraParams:;
- (void)markPhasedPointPhase:containerView:phaseName:;
- (void)markPhasedPointStart:containerView:extraParams:;
+ (id)allocWithZone:;
+ (id)shared;
@end
