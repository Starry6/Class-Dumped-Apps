@interface AWEUserContextManagerShowMonitor : NSObject
@property (nonatomic) NSDate date;
@property (nonatomic) BOOL finished;
@property (nonatomic) NSDate startDate;
@property (nonatomic) NSMutableArray pageNames;
@property (nonatomic) NSMutableDictionary params;
- (id)pageNames;
- (id)showMonitorParamsWith:finished:extDict:;
- (void)setPageNames:;
- (BOOL)finished;
- (id)startDate;
- (id)init;
- (void)setDate:;
- (void)setFinished:;
- (void)setStartDate:;
- (void).cxx_destruct;
- (id)params;
- (id)date;
- (void)setParams:;
@end
