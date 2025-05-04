@interface AWEFeedScrollExpeMonitor : NSObject
@property (nonatomic) AWEFeedScrollingTimeCostModel scrollingModel;
@property (nonatomic) AWEFeedConfigureTimeCostModel configureModel;
- (id)scrollingModel;
- (id)configureModel;
- (void)_reportScrollingTimeCost:;
- (void)_reportCellConfigTimeCost:;
- (void)report;
- (id)init;
- (void)_reset;
- (void).cxx_destruct;
- (BOOL)_reportEnabled;
+ (id)sharedMonitor;
@end
