@interface GKDecisionTree : NSObject
@property (nonatomic) GKDecisionNode rootNode;
@property (nonatomic) GKRandomSource randomSource;
- (id)init;
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)initWithURL:error:;
- (id)rootNode;
- (id)initWithAttribute:;
- (id)initWithExamples:actions:attributes:;
- (id)initWithExamples:actions:attributes:maxDepth:minSamplesSplit:;
- (BOOL)exportToURL:error:;
- (id)getFlattenedTree;
- (id)findActionForAnswers:;
- (id)findAccuracyWithExamples:actions:attributes:;
- (void)setRootNode:;
- (id)randomSource;
- (void)setRandomSource:;
+ (BOOL)supportsSecureCoding;
@end
