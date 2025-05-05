@interface IESLiveSaaSLiveFeedDynamicModel : BDDynamicMTLModel
@property (nonatomic) NSArray outFlows;
@property (nonatomic) NSArray innerFlows;
@property (nonatomic) NSArray drawers;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)drawers;
- (id)innerFlows;
- (id)outFlows;
- (void)setDrawers:;
- (void)setInnerFlows:;
- (void)setOutFlows:;
- (void).cxx_destruct;
+ (id)drawersJSONTransformer;
+ (id)innerFlowsJSONTransformer;
+ (id)outFlowsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
