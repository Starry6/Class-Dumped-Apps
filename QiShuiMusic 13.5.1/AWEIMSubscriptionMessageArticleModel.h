@interface AWEIMSubscriptionMessageArticleModel : NSObject
@property (nonatomic) NSString articleId;
@property (nonatomic) NSString title;
@property (nonatomic) NSString jumpUrl;
@property (nonatomic) IESIMURLModel articleImg;
- (id)jumpUrl;
- (id)articleImg;
- (id)getContentDict;
- (id)initWithContentDict:;
- (void)setArticleImg:;
- (void)setJumpUrl:;
- (void)setTitle:;
- (void)setArticleId:;
- (id)articleId;
- (id)title;
- (void).cxx_destruct;
@end
