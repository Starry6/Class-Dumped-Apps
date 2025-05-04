@interface AWEPOIVirgoOptiStrategyResults : NSObject
@property (nonatomic) NSMutableDictionary strategyResults;
@property (nonatomic) <AWEPOIVirgoOptiStrategyResultsUpdateProtocol> delegate;
- (void)setStrategyResults:;
- (id)strategyResults;
- (void)updateResultsWithRule:;
- (id)resultWithStrategyKey:;
- (id)resultsWithStrategyKeys:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
@end
