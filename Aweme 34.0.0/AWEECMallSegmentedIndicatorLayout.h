@interface AWEECMallSegmentedIndicatorLayout : NSObject
@property (nonatomic) AWEECMallSegmentedIndicator indicator;
- (void)updateIndicatorFrameWithItemLayoutInfo:indicatorConfig:containerHeight:;
- (id)indicator;
- (void)setIndicator:;
- (void).cxx_destruct;
+ (id)indicatorFrameWithItemLayoutInfo:indicatorConfig:containerHeight:;
+ (id)layoutWithIndicator:;
@end
