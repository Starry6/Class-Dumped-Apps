@interface AWEPOIProductInfoModel : AWEBaseApiModel
@property (nonatomic) NSString leftTitle;
@property (nonatomic) NSString moreTitle;
@property (nonatomic) NSString moreUrl;
@property (nonatomic) NSArray products;
@property (nonatomic) Q displayStyle;
@property (nonatomic) NSString source;
@property (nonatomic) NSString supplierId;
@property (nonatomic) AWEPOIServiceSpuEntryModel poiCustomerEntry;
- (id)moreTitle;
- (id)poiCustomerEntry;
- (id)supplierId;
- (void)setMoreTitle:;
- (id)moreUrl;
- (void)setMoreUrl:;
- (void)setSupplierId:;
- (void)setPoiCustomerEntry:;
- (void)setDisplayStyle:;
- (id)products;
- (unsigned long long)displayStyle;
- (void).cxx_destruct;
- (id)source;
- (void)setSource:;
- (void)setProducts:;
- (id)leftTitle;
- (void)setLeftTitle:;
+ (id)productsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
