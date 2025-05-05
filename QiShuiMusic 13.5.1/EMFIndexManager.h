@interface EMFIndexManager : NSObject
@property (nonatomic) EMFInvertedIndex defaultIndex;
@property (nonatomic) EMFInvertedIndex stemmedIndex;
- (void).cxx_destruct;
- (id)initWithBundle:;
- (id)defaultIndex;
- (void)setDefaultIndex:;
- (id)stemmedIndex;
- (void)preheatIndexes;
- (void)setStemmedIndex:;
@end
