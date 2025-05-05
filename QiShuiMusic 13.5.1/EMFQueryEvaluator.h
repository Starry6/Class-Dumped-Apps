@interface EMFQueryEvaluator : NSObject
@property (nonatomic) EMFInvertedIndex index;
@property (nonatomic) EMFQueryResultOverrideList overrideList;
- (id)performQuery:;
- (id)index;
- (id)initWithIndex:;
- (void).cxx_destruct;
- (id)initWithIndex:andOverrideList:;
- (id)_overriddenResultsForQuery:;
- (id)overrideList;
- (void)setOverrideList:;
@end
