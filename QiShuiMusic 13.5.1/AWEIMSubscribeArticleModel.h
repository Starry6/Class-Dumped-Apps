@interface AWEIMSubscribeArticleModel : IESIMBaseApiModel
@property (nonatomic) NSString title;
@property (nonatomic) NSString jumpUrl;
@property (nonatomic) q articleId;
@property (nonatomic) IESIMURLModel articleImg;
@property (nonatomic) q readCount;
- (id)jumpUrl;
- (id)articleImg;
- (void)setArticleImg:;
- (void)setJumpUrl:;
- (void)setTitle:;
- (void)setArticleId:;
- (long long)articleId;
- (id)title;
- (void).cxx_destruct;
- (long long)readCount;
- (void)setReadCount:;
+ (id)articleImgJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
