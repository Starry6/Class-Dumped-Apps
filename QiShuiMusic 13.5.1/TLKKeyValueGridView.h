@interface TLKKeyValueGridView : NUIContainerGridView
@property (nonatomic) NSMutableArray keyLabels;
@property (nonatomic) NSMutableArray valueLabels;
- (id)init;
- (void).cxx_destruct;
- (void)updateWithTuples:valueColumnIsTrailing:truncateKey:;
- (id)keyLabels;
- (void)setKeyLabels:;
- (id)valueLabels;
- (void)setValueLabels:;
@end
