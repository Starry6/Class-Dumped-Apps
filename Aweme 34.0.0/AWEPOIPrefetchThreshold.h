@interface AWEPOIPrefetchThreshold : NSObject
@property (nonatomic) q totalLimit;
@property (nonatomic) q individualLimit;
@property (nonatomic) double interval;
@property (nonatomic) NSMutableArray totalTimestamps;
@property (nonatomic) NSMutableDictionary individualTimestamps;
@property (nonatomic) q totalOverflowCounter;
@property (nonatomic) NSMutableDictionary individualOverflowCounterDict;
- (id)initWithTotalLimit:individualLimit:interval:;
- (BOOL)checkIfReachThreshold:error:;
- (void)setTotalLimit:;
- (void)setIndividualLimit:;
- (void)setTotalTimestamps:;
- (void)setIndividualTimestamps:;
- (void)setIndividualOverflowCounterDict:;
- (id)totalTimestamps;
- (long long)totalOverflowCounter;
- (void)setTotalOverflowCounter:;
- (id)individualTimestamps;
- (long long)individualLimit;
- (id)individualOverflowCounterDict;
- (BOOL)checkIfReachThreshold:;
- (double)interval;
- (void)setInterval:;
- (void).cxx_destruct;
- (long long)totalLimit;
@end
