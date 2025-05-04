@interface AWELongVideoMonitor : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (void)longVideoPageMonitorWithScene:totalCost:uiDuration:extParams:;
+ (void)longVideoTrackerMonitorWithParamName:extParams:;
+ (void)longVideoPlayerStallMonitorWithScene:duration:extParams:;
+ (void)longVideoPlayerFailMonitorWithScene:type:model:;
@end
