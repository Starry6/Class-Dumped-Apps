@interface AWEPaySwiftImpl.FKMPromotionInfoModel : MTLModel
@property (nonatomic) NSString platformPromotionDesc;
@property (nonatomic) NSString iconUrl;
- (id)iconUrl;
- (void)setIconUrl:;
- (id)platformPromotionDesc;
- (void)setPlatformPromotionDesc:;
- (id)initWithDictionary:error:;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:;
+ (id)JSONKeyPathsByPropertyKey;
@end
