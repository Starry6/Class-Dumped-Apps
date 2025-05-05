@interface IESLiveRevenueInteractStreamAverageFPSCalculator : NSObject
@property (nonatomic) Q currentCount;
@property (nonatomic) NSNumber currentStreamFPS;
@property (nonatomic) NSNumber streamAverageFPS;
@property (nonatomic) NSMutableArray arr;
@property (nonatomic) q sumFPS;
@property (nonatomic) Q sampleCount;
- (void)setArr:;
- (void)addFPSData:;
- (id)currentStreamFPS;
- (void)setCurrentStreamFPS:;
- (void)setStreamAverageFPS:;
- (void)setSumFPS:;
- (id)streamAverageFPS;
- (long long)sumFPS;
- (unsigned long long)sampleCount;
- (unsigned long long)currentCount;
- (id)init;
- (void)setSampleCount:;
- (void)clear;
- (void).cxx_destruct;
- (id)arr;
- (void)setCurrentCount:;
@end
