@interface IESECGoodsDetailNavBarModel : IESECBaseApiModel
@property (nonatomic) NSArray slices;
@property (nonatomic) IESECommerceGoodsDetailNavBarConfig config;
- (id)firstSlice;
- (void)setConfig:;
- (void).cxx_destruct;
- (id)config;
- (id)slices;
- (void)setSlices:;
+ (id)slicesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
