@interface IESECGoodsDetailDetailTopInfoBusinessMetaModel : IESECBaseApiModel
@property (nonatomic) NSDictionary authInfo;
@property (nonatomic) Q selectedIndex;
@property (nonatomic) NSArray skuIDs;
@property (nonatomic) NSString propertyPageSchema;
- (id)propertyPageSchema;
- (void)setPropertyPageSchema:;
- (void)setSkuIDs:;
- (id)skuIDs;
- (unsigned long long)selectedIndex;
- (id)authInfo;
- (void)setAuthInfo:;
- (void).cxx_destruct;
- (void)setSelectedIndex:;
@end
