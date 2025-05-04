@interface AWESearchAIGCSubDataControllerMonitor : NSObject
@property (nonatomic) NSMutableDictionary params;
- (double)nowTS;
- (void)addTSForKey:;
- (void)resetParams;
- (void)addParamsFromDictionary:;
- (void)caculateParams;
- (double)beginTime;
- (void).cxx_destruct;
- (id)params;
- (void)sendTrace;
- (void)setParams:;
@end
