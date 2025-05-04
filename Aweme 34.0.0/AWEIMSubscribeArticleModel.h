@interface AWEIMSubscribeArticleModel : AWEBaseApiModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString jumpUrl;
@property (nonatomic) q articleId;
@property (nonatomic) AWEURLModel articleImg;
@property (nonatomic) q readCount;
- (id)jumpUrl;
- (void)setJumpUrl:;
- (id)articleImg;
- (void)setArticleImg:;
- (long long)readCount;
- (void)setArticleId:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (long long)articleId;
- (void)setReadCount:;
+ (id)articleImgJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
