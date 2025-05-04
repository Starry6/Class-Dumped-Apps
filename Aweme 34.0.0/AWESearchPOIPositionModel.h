@interface AWESearchPOIPositionModel : AWEBaseApiModel
@property (nonatomic) NSString target;
@property (nonatomic) NSArray positions;
- (void)setPositions:;
- (id)target;
- (void)setTarget:;
- (void).cxx_destruct;
- (id)positions;
+ (id)positionsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
