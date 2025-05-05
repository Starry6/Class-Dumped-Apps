@interface MPSNNScaleNode : MPSNNFilterNode
- (void)dealloc;
- (id)debugDescription;
- (id)privateInitWithSource:transformProvider:outputSize:;
- (id)initWithSource:transformProvider:outputSize:;
- (id)initWithSource:outputSize:;
+ (id)nodeWithSource:transformProvider:outputSize:;
+ (id)nodeWithSource:outputSize:;
@end
