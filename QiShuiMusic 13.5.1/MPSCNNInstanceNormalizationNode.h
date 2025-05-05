@interface MPSCNNInstanceNormalizationNode : MPSNNFilterNode
@property (nonatomic) Q trainingStyle;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (id)newFilterNode;
- (Class)gradientClass;
- (unsigned long long)trainingStyle;
- (void)setTrainingStyle:;
- (id)initWithSource:dataSource:;
+ (id)nodeWithSource:dataSource:;
@end
