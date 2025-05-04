@interface AWEPOISpuStatInfoModel : MTLModel
@property (nonatomic) NSString clickUserCount;
@property (nonatomic) q saleCount;
@property (nonatomic) q saleCountL30;
@property (nonatomic) NSString saleCountShow;
@property (nonatomic) q lowPrice;
@property (nonatomic) NSString discount;
@property (nonatomic) NSString schema;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)discount;
- (void)setDiscount:;
- (id)clickUserCount;
- (void)setClickUserCount:;
- (long long)saleCount;
- (void)setSaleCount:;
- (long long)saleCountL30;
- (void)setSaleCountL30:;
- (id)saleCountShow;
- (void)setSaleCountShow:;
- (long long)lowPrice;
- (void)setLowPrice:;
- (id)schema;
- (void)setSchema:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
