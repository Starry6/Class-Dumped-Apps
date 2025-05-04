@interface AWEDoubleColumnSearchMarketInfoModel : AWEBaseApiModel
@property (nonatomic) NSString imgUrl;
@property (nonatomic) NSString name;
@property (nonatomic) NSString deliveryFee;
@property (nonatomic) NSString distance;
@property (nonatomic) NSString schema;
@property (nonatomic) NSString tokenType;
@property (nonatomic) q jumpType;
- (long long)jumpType;
- (void)setJumpType:;
- (id)imgUrl;
- (void)setImgUrl:;
- (id)deliveryFee;
- (void)setDeliveryFee:;
- (id)schema;
- (void)setDistance:;
- (void)setTokenType:;
- (void)setSchema:;
- (id)distance;
- (void).cxx_destruct;
- (void)setName:;
- (id)name;
- (id)tokenType;
+ (id)JSONKeyPathsByPropertyKey;
@end
