@interface AWESearchMerchandiseResultModel : AWEBaseApiModel
@property (nonatomic) AWESearchMerchandiseModel merchandiseModel;
@property (nonatomic) NSArray positions;
- (void)setPositions:;
- (id)merchandiseModel;
- (void)setMerchandiseModel:;
- (void).cxx_destruct;
- (id)positions;
+ (id)positionsJSONTransformer;
+ (id)merchandiseModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
