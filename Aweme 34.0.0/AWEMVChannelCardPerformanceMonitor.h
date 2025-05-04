@interface AWEMVChannelCardPerformanceMonitor : NSObject
@property (nonatomic) NSMutableDictionary loadTimeMap;
- (id)loadTimeMap;
- (void)startLoadCard:;
- (void)finishLoadCard:cardType:isPreloaded:;
- (void)setLoadTimeMap:;
- (double)currentDate;
- (void).cxx_destruct;
@end
