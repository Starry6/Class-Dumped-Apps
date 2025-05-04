@interface AWEFavoriteRecommendModel : AWEBaseApiModel
@property (nonatomic) NSString tagName;
@property (nonatomic) q itemCount;
@property (nonatomic) AWEAwemeModel latestItem;
- (id)latestItem;
- (void)setLatestItem:;
- (long long)itemCount;
- (void).cxx_destruct;
- (id)tagName;
- (void)setItemCount:;
- (void)setTagName:;
+ (id)JSONKeyPathsByPropertyKey;
@end
