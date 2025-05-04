@interface AWEFavoriteGrouponItem : AWEBaseApiModel
@property (nonatomic) NSNumber grouponID;
@property (nonatomic) NSString grouponTag;
@property (nonatomic) NSString title;
@property (nonatomic) AWEURLModel coverURL;
@property (nonatomic) NSString url;
@property (nonatomic) NSString favoriteTag;
@property (nonatomic) NSNumber price;
@property (nonatomic) NSNumber originalPrice;
- (void)setOriginalPrice:;
- (id)originalPrice;
- (id)grouponID;
- (id)grouponTag;
- (id)favoriteTag;
- (void)setGrouponID:;
- (void)setGrouponTag:;
- (void)setFavoriteTag:;
- (id)price;
- (void)setUrl:;
- (void).cxx_destruct;
- (id)title;
- (id)url;
- (void)setTitle:;
- (void)setPrice:;
- (id)coverURL;
- (void)setCoverURL:;
+ (id)coverURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
