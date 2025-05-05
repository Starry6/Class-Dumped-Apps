@interface IESLiveGiftPerformance : NSObject
@property (nonatomic) NSMutableDictionary performanceInfo;
- (id)performanceInfo;
- (double)endWithKey:;
- (void)setPerformanceInfo:;
- (void)startWithKey:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
