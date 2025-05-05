@interface IESIMSearchMerchandiseResultModel : IESIMBaseApiModel
@property (nonatomic) IESIMSearchMerchandiseModel merchandiseModel;
@property (nonatomic) NSArray positions;
- (id)merchandiseModel;
- (void)setMerchandiseModel:;
- (void)setPositions:;
- (void).cxx_destruct;
- (id)positions;
+ (id)merchandiseModelJSONTransformer;
+ (id)positionsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
