@interface MLPNDArrayLossLabels : NSObject
@property (nonatomic) NSMutableArray largeReductionSumResult;
@property (nonatomic) NSMutableArray smallReductionSumResult;
@property (nonatomic) NSArray labels;
- (id)init;
- (id)labels;
- (void).cxx_destruct;
- (void)setLabels:;
- (id)largeReductionSumResult;
- (void)setLargeReductionSumResult:;
- (id)smallReductionSumResult;
- (void)setSmallReductionSumResult:;
@end
