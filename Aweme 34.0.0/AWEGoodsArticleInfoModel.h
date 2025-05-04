@interface AWEGoodsArticleInfoModel : MTLModel
@property (nonatomic) NSArray pdtTags;
@property (nonatomic) NSString pdtDescSecond;
@property (nonatomic) NSString pdtDescThird;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)pdtTags;
- (id)pdtDescSecond;
- (id)pdtDescThird;
- (void)setPdtTags:;
- (void)setPdtDescSecond:;
- (void)setPdtDescThird:;
- (void).cxx_destruct;
+ (id)pdtTagsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
