@interface AWEIMDecisionTree : MTLModel
@property (nonatomic) AWEIMDecisionNode root;
@property (nonatomic) NSString defaultConfigName;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)compactWithIndexNodes;
- (void)recoverFromIndexNodes:;
- (id)defaultConfigName;
- (void)compactNodesFromRoot:indexNodes:;
- (void)recoverNodesFromRoot:indexNodes:;
- (void)setDefaultConfigName:;
- (id)root;
- (void).cxx_destruct;
- (void)setRoot:;
+ (id)modelCustomPropertyMapper;
+ (id)rootJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
