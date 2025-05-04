@interface AWEAnchorAdditionResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray modelList;
@property (nonatomic) NSArray tabs;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) NSString navBarTitle;
@property (nonatomic) NSString bizExtra;
- (id)modelList;
- (id)bizExtra;
- (void)setBizExtra:;
- (void)setModelList:;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void).cxx_destruct;
- (id)tabs;
- (void)setNavBarTitle:;
- (id)navBarTitle;
- (void)setTabs:;
+ (id)modelListJSONTransformer;
+ (id)tabsJSONTransformer;
+ (id)hasMoreJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
