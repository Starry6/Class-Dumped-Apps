@interface AWETheaterMoreFeedResponseModel : AWEBaseApiModel
@property (nonatomic) NSArray itemList;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) q offset;
@property (nonatomic) NSString sectionTitle;
@property (nonatomic) q appletOffset;
- (void)setAppletOffset:;
- (long long)appletOffset;
- (void)setOffset:;
- (long long)offset;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void).cxx_destruct;
- (id)itemList;
- (void)setItemList:;
- (id)sectionTitle;
- (void)setSectionTitle:;
+ (id)itemListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
