@interface IESECGoodsDetailBottomModel : IESECBaseApiModel
@property (nonatomic) IESECGoodsDetailBottomConfig config;
@property (nonatomic) NSArray slices;
- (void)setConfig:;
- (void).cxx_destruct;
- (id)config;
- (id)slices;
- (void)setSlices:;
+ (id)slicesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
