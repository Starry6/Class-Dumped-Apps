@interface AWEPOILifeCollectTagModel : MTLModel
@property (nonatomic) q tagType;
@property (nonatomic) NSString imgUrlLight;
@property (nonatomic) NSString imgUrlDark;
@property (nonatomic) NSString imgUrl;
@property (nonatomic) NSArray tagTextList;
@property (nonatomic) q flashSaleTS;
@property (nonatomic) BOOL hasText;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)imgUrl;
- (void)setImgUrl:;
- (id)tagTextList;
- (id)imgUrlLight;
- (void)setImgUrlLight:;
- (id)imgUrlDark;
- (void)setImgUrlDark:;
- (void)setTagTextList:;
- (long long)flashSaleTS;
- (void)setFlashSaleTS:;
- (long long)tagType;
- (BOOL)hasText;
- (void).cxx_destruct;
- (void)setHasText:;
- (void)setTagType:;
+ (id)JSONKeyPathsByPropertyKey;
@end
