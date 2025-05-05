@interface IESECGoodsDetailDetailPropertySKUModel : IESECBaseApiModel
@property (nonatomic) IESECMediaBoxElement cover;
@property (nonatomic) IESECTextWithIconElement content;
@property (nonatomic) NSArray subProducts;
- (void)setSubProducts:;
- (id)cover;
- (void)setCover:;
- (id)subProducts;
- (BOOL)useSimpleTextCell;
- (id)content;
- (void)setContent:;
- (void).cxx_destruct;
@end
