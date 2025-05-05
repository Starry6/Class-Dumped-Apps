@interface TSPKBacktraceStoreModel : NSObject
@property (nonatomic) NSArray backtraces;
@property (nonatomic) double timestamp;
- (id)backtraces;
- (void)setBacktraces:;
- (void)setTimestamp:;
- (void).cxx_destruct;
- (double)timestamp;
@end
