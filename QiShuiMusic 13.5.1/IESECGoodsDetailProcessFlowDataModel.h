@interface IESECGoodsDetailProcessFlowDataModel : IESECBaseApiModel
@property (nonatomic) IESECLongContentLabelElement title;
@property (nonatomic) NSArray processItem;
- (void)setProcessItem:;
- (id)processItem;
- (void)setTitle:;
- (id)title;
- (void).cxx_destruct;
+ (id)processItemJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
