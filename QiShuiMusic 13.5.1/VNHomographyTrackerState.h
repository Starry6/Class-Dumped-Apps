@interface VNHomographyTrackerState : NSObject
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)ICShouldBeCanceled;
- (void)ICReportFrameAnalysis:forPresentationTime:withStats:;
@end
