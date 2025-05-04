@interface AWEAwemeRelatedCollectsInfo : AWEBaseApiModel
@property (nonatomic) q hotFeedFavoritesInteractType;
@property (nonatomic) AWEFavoriteFolderBaseInfoModel favoriteFolderModel;
- (long long)hotFeedFavoritesInteractType;
- (void)setHotFeedFavoritesInteractType:;
- (id)favoriteFolderModel;
- (void)setFavoriteFolderModel:;
- (void).cxx_destruct;
+ (id)favoriteFolderModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
