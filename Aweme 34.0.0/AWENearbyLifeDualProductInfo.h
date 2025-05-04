@interface AWENearbyLifeDualProductInfo : AWEBaseApiModel
@property (nonatomic) NSString brandName;
@property (nonatomic) NSString productName;
@property (nonatomic) NSString priceInfo;
@property (nonatomic) AWEURLModel headImage;
- (id)headImage;
- (void)setHeadImage:;
- (id)priceInfo;
- (void)setPriceInfo:;
- (void)setProductName:;
- (id)productName;
- (void).cxx_destruct;
- (id)brandName;
- (void)setBrandName:;
+ (BOOL)automaticallyDefaultMapping;
+ (id)headImageJSONTransformer;
@end
