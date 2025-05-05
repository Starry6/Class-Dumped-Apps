@interface IESECommerceGoodsDetailNavBarConfig : IESECBaseApiModel
@property (nonatomic) NSArray transitionNodes;
@property (nonatomic) NSArray scrollNodes;
@property (nonatomic) BOOL collected;
@property (nonatomic) BOOL collapsed;
- (void)setScrollNodes:;
- (id)transitionNodes;
- (BOOL)collected;
- (id)scrollNodes;
- (void)setCollected:;
- (void)setTransitionNodes:;
- (void)setCollapsed:;
- (void).cxx_destruct;
- (BOOL)collapsed;
+ (id)scrollNodesJSONTransformer;
+ (id)transitionNodesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
