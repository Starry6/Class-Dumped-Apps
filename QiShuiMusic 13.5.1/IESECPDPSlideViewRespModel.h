@interface IESECPDPSlideViewRespModel : IESECBaseApiModel
@property (nonatomic) NSArray productList;
- (void)setProductList:;
- (id)productList;
- (void).cxx_destruct;
+ (id)productListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
