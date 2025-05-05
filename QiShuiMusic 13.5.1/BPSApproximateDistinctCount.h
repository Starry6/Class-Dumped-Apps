@interface BPSApproximateDistinctCount : NSObject
@property (nonatomic) double approximateDistinctCount;
@property (nonatomic) BOOL countMapFull;
- (id)init;
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)addValue:;
- (void)addData:;
- (id)initWithHllState:;
- (double)approximateDistinctCount;
- (BOOL)countMapFull;
- (void)printState;
- (void)setApproximateDistinctCount:;
- (void)setCountMapFull:;
+ (BOOL)supportsSecureCoding;
@end
