@interface IESIMSearchPOIPositionModel : IESIMBaseApiModel
@property (nonatomic) NSString target;
@property (nonatomic) NSArray positions;
- (void)setPositions:;
- (void)setTarget:;
- (void).cxx_destruct;
- (id)target;
- (id)positions;
+ (id)positionsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
