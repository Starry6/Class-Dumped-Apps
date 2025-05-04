@interface AWEFavoritePOISelectorModel : AWEBaseApiModel
@property (nonatomic) NSString title;
@property (nonatomic) NSArray list;
- (void)setList:;
- (id)list;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:;
+ (id)listJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
