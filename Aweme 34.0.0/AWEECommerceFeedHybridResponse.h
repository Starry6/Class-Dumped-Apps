@interface AWEECommerceFeedHybridResponse : AWEBaseApiModel
@property (nonatomic) NSArray feed;
@property (nonatomic) NSArray infos;
@property (nonatomic) AWEECommerceFeedHybridPage page;
@property (nonatomic) NSArray awemeList;
@property (nonatomic) NSDictionary extra;
- (void)setExtra:;
- (id)awemeList;
- (void)setAwemeList:;
- (id)infos;
- (id)feed;
- (id)page;
- (id)extra;
- (void)setFeed:;
- (void).cxx_destruct;
- (void)setPage:;
- (void)setInfos:;
+ (id)infosJSONTransformer;
+ (id)feedJSONTransformer;
+ (id)pageJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
