@interface MPSNNConcatenationNode : MPSNNFilterNode
- (id)initWithSource:;
- (id)initWithSources:;
- (id)gradientFiltersWithSources:;
- (id)newFilterNode;
- (Class)gradientClass;
+ (id)nodeWithSource:;
+ (id)nodeWithSources:;
@end
