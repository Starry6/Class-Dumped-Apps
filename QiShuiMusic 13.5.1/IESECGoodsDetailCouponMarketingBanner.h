@interface IESECGoodsDetailCouponMarketingBanner : MTLModel
@property (nonatomic) q type;
@property (nonatomic) NSArray leftElements;
@property (nonatomic) NSArray rightElements;
@property (nonatomic) NSString jumpUrl;
@property (nonatomic) NSString bgImgUrl;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)jumpUrl;
- (id)bgImgUrl;
- (id)leftElements;
- (id)rightElements;
- (void)setBgImgUrl:;
- (void)setJumpUrl:;
- (void)setLeftElements:;
- (void)setRightElements:;
- (void)setType:;
- (long long)type;
- (void).cxx_destruct;
+ (id)leftElementsJSONTransformer;
+ (id)rightElementsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
