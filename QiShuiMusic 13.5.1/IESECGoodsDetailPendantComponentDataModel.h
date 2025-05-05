@interface IESECGoodsDetailPendantComponentDataModel : IESECBaseApiModel
@property (nonatomic) NSDictionary pendants;
- (id)pendants;
- (void)setPendants:;
- (void).cxx_destruct;
+ (id)pendantsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
