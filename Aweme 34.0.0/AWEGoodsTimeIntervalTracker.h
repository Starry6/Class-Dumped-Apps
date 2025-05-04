@interface AWEGoodsTimeIntervalTracker : NSObject
@property (nonatomic) NSDictionary params;
@property (nonatomic) NSString event;
@property (nonatomic) NSDate startDate;
@property (nonatomic) NSDictionary otherParams;
@property (nonatomic) BOOL useable;
- (void)startTrack;
- (void)endTrack;
- (void)setOtherParams:;
- (id)otherParams;
- (void)handleAPPWillEnterForeground:;
- (void)handleAPPDidEnterBackground:;
- (BOOL)useable;
- (id)initWithEvent:params:;
- (void)setUseable:;
- (id)startDate;
- (void)dealloc;
- (void)setEvent:;
- (void)setStartDate:;
- (void).cxx_destruct;
- (id)event;
- (id)params;
- (void)setParams:;
@end
