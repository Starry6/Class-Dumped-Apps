@interface AWEIMSubscriptionMessageArticleModel : NSObject
@property (nonatomic) NSString articleId;
@property (nonatomic) NSString title;
@property (nonatomic) NSString jumpUrl;
@property (nonatomic) AWEURLModel articleImg;
- (id)jumpUrl;
- (void)setJumpUrl:;
- (id)initWithContentDict:;
- (id)getContentDict;
- (id)articleImg;
- (void)setArticleImg:;
- (void)setArticleId:;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
- (id)articleId;
@end
