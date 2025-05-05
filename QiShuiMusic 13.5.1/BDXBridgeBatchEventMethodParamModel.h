@interface BDXBridgeBatchEventMethodParamModel : BDXBridgeModel
@property (nonatomic) NSString actionType;
@property (nonatomic) NSArray actionList;
- (id)actionType;
- (void)setActionType:;
- (void).cxx_destruct;
- (id)actionList;
- (void)setActionList:;
+ (id)actionListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
