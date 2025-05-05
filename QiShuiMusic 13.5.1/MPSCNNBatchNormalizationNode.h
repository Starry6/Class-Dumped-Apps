@interface MPSCNNBatchNormalizationNode : MPSNNFilterNode
@property (nonatomic) Q flags;
@property (nonatomic) Q trainingStyle;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)setFlags:;
- (unsigned long long)flags;
- (id)newFilterNode;
- (Class)gradientClass;
- (unsigned long long)trainingStyle;
- (void)setTrainingStyle:;
- (id)resultStates;
- (id)sourceStates;
- (id)initWithSource:dataSource:;
- (BOOL)calculateStatistics;
+ (id)nodeWithSource:dataSource:;
@end
