@interface RACDynamicSequence : RACSequence
@property (nonatomic) @ headBlock;
@property (nonatomic) @ tailBlock;
@property (nonatomic) BOOL hasDependency;
@property (nonatomic) @? dependencyBlock;
- (id)dependencyBlock;
- (BOOL)hasDependency;
- (id)headBlock;
- (void)setDependencyBlock:;
- (void)setHasDependency:;
- (void)setHeadBlock:;
- (void)setTailBlock:;
- (id)tailBlock;
- (id)head;
- (id)tail;
- (void)dealloc;
- (void).cxx_destruct;
- (id)description;
+ (id)sequenceWithHeadBlock:tailBlock:;
+ (id)sequenceWithLazyDependency:headBlock:tailBlock:;
@end
